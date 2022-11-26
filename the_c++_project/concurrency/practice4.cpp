#include <string>
#include <mutex>
#include <vector>
#include <iostream>
#include <thread>

std::mutex mtxCout;

class Board: public std::enable_shared_from_this<Board>
{
private:
    static int _idCnt;
    int _id, _waitTime;
    std::string _message;
    std::vector<std::shared_ptr<Board>> _boards;

public:
    Board() {
        _message =  "";
        _id = _idCnt;
        _idCnt++;
        _waitTime = 0;
    };
    void setMessage(std::string message) {
        _message = message;
        printBoard();
    }
    void setWaitTime(int waitTime) { _waitTime = waitTime; }
    void setBoards(std::vector<std::shared_ptr<Board>> boards) {
        _boards = boards;
    }
    int getId() { return _id; }

    void play() {
        mtxCout.lock();
        std::cout << "board(" << _id << ") begin of play() with "
            << "thread id=" << std::this_thread::get_id()
            << std::endl;
        mtxCout.unlock();

        // begin of critical section
        board_mutex.lock();
        // write on this board
        setMessage("board(" + std::to_string(_id) + ") mutex locked");
        std::this_thread::sleep_for(
            std::chrono::milliseconds(_waitTime));
        for (auto board : _boards) {
            // write on another board
            if (board->getId() != getId()) {
                board->setMessage("board(" + std::to_string(_id) +
                ") writing on the board(" +
                std::to_string(board->getId()) + ")");
            }
        }

        setMessage("board(" + std::to_string(_id) + ") unlocked");
        // end of critical section
        board_mutex.unlock();
    }

    void printBoard() {
        mtxCout.lock();
        std::cout << _message << std::endl;
        mtxCout.unlock();
    }

    std::mutex board_mutex;

};

int Board::_idCnt = 0;

int main() {
    std::vector<std::shared_ptr<Board>> boards;
    for (int nb = 0; nb < 2; nb++) {
        boards.push_back(std::make_shared<Board>());
    }
    boards.at(0)->setBoards(boards);
    boards.at(0)->setWaitTime(3000);
    boards.at(1)->setBoards(boards);
    boards.at(1)->setWaitTime(1000);
    std::thread t0(&Board::play, boards.at(0));
    std::thread t1(&Board::play, boards.at(1));
    t0.join();
    t1.join();
    return 0;
}