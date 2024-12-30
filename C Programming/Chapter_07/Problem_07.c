#include <stdio.h>
#include <conio.h>

int addreturn(int *);
int changevalue(int *);
int sumavg(int *, int *);

int addreturn(int *ptr) {
    printf("the address of ptr is: %d\n", ptr);
    printf("The value of ptr is: %d\n", *ptr);
}

int changevalue(int *ptr) {
    *ptr = 10 * *ptr;
    printf("The value of i is: %d\n", *ptr);
}

int sumavg(int *a, int *b) {
    int sum = *a + *b;
    float avg = (float) sum / 2;
    printf("The sum and average of two numbers respectively are: %d and %.4f\n", sum, avg);
}

int main()
{

    // Problem 1.
    int i = 2;
    int *ptr = &i;
    printf("the address of i is: %p\n", ptr);
    printf("The value of i is: %d\n", *ptr);

    // Problem 2.
    addreturn(ptr);

    // Problem 3.
    changevalue(ptr);

    // Problem 4.
    // Done in function call

    // Problem 5.
    int a = 4, b = 7;
    sumavg(&a, &b);

    // Problem 6.
    // Done in pointer to pointer

    // Problem 7.
    // Done in function call

    return 0;

}