#include <stdio.h>
#include <conio.h>

int main()
{

    int i = 70;
    int *j = &i;        // j is a pointer pointing to i, j is an integer pointer
    printf("The address of i is: %p\n", &i);
    printf("The address of i is: %d\n", &i);
    printf("The value of i using pointer is: %d\n", *(&i));

    char x = 'a';
    char *y = &x;        // y is a pointer pointing to x, y is a character pointer
    printf("The address of x is: %p\n", &x);
    printf("The address of x is: %d\n", &x);
    printf("The value of x using pointer is: %d\n", *(y));
    
    float p = 56.74567;
    float *q = &p;        // q is a pointer pointing to p, q is a float pointer
    printf("The address of p is: %p\n", &p);
    printf("The address of p is: %d\n", &p);
    printf("The value of p using pointer is: %f\n", *(&p));

    return 0;

}