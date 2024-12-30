#include <stdio.h>
#include <conio.h>

int main()
{

    // int marks[5];
    // printf("Enter marks of 5 students:\n");
    // for (int i = 0; i < 5; i++)
    // {
    //     scanf("%d", &marks[i]);
    // }
    // for (int i = 0; i < 5; i++)
    // {
    //     printf("Marks %d : %d\n", i,  marks[i]);
    // }
    
    // // Array initialisation
    // int cgpa[3] = {9, 7, 8};
    // for (int i = 0; i < 3; i++)
    // {
    //     printf("CGPA at index %d : %d\n", i,  cgpa[i]);
    // }

    // POINTER ARITHMETIC USING INTEGER POINTER
    int a = 5;
    int *ptr = &a;
    printf("The address of a is: %u\n", &a);
    printf("The address of a is: %u\n", ptr);
    ptr++;
    printf("The value of ptr is: %u\n", ptr);

    // POINTER ARITHMETIC USING CHARACTER POINTER
    char b = 'A';
    char *chptr = &b;
    printf("The address of a is %u\n", &b);
    printf("The address of a is %u\n", chptr);
    chptr++;
    printf("The value of ptr is %u\n", chptr);


    return 0;

}