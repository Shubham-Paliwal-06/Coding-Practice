#include <stdio.h>
#include <conio.h>

int main()
{

    int marks[] = {12,34,56,78,89};
    int *ptr = marks;    // Same as int *ptr = &marks[0];
    for (int i = 0; i < 5; i++)
    {
        printf("The marks at index %d is %d\n", i, marks[i]);
        printf("The marks at index %d is %d\n", i, *ptr);
        ptr++;
    }

    return 0;

}