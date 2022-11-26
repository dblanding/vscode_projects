// pointer arithmetic

#include <stdio.h>

typedef struct
{
    int x, y;
    short life;
    char *name;
} Man;

int main(int argc, char *argv[])
{
    Man *ptr;                       // Declare pointer to type Man (pointer is not initialized yet. It is 'wild'.)
    Man man = { 0, 0, 10, NULL };   // create a Man object named man and initialize it.
    man.x = 50;                     // Change value of man.x to 50
    ptr = &man;                     // Initialize ptr as a reference to man. (Assign address of man to ptr)
    ptr->x = 60;                    // Set x = 60 by dereferencing pointer using '->'
    man.name = "man";

    int n_men = 10;                 // number of men
    Man men[n_men];                 // Create an array of 'n_men' length Man objects
    men[0].x = 50;                  // Initialize the value of 'x' in the first one. Leave the rest un-initialized.

    char str2[1024] = "A string";
    str2[0] = 'B';

    printf("Pointers in C\n");
    printf("Value of man.x = %d \n", man.x);
    printf("man.name[2] = %c \n", man.name[2]);
    printf("\n");
    printf("Create an array of %d Man objects \n", n_men);
    printf("The first element has its x member initialized to 50 \n");
    printf("The rest have not been initialized\n");
    
    for(int i = 0; i < n_men; i++)
    {
        printf("men[%d].x = %d \n", i, men[i].x);
    }
    printf("\n");
    printf("%s \n", str2);
    return 0;
}