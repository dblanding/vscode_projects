// pointer arithmetic

#include <stdio.h>

int main(int argc, char *argv[])
{
    int myarray[1024] = { 50 };   // Declare array named myarray and initialize first element
    int *ptr = myarray;           // Declare a pointer to array
    ptr = myarray+1023;           // Move ptr
    ptr = &myarray[1023];         // Exactly the same as previous line
    // (myarray == &myarray[0])   // Always true
    printf("Review of C\n");
    printf("Value of first array element = %d \n", myarray[0]);
    printf("Value of second element = %d \n", myarray[1]);
    printf("Value of last element = %d \n", myarray[1023]);
    printf("Value of last element = %d \n", myarray[1023]);
    return 0;
}