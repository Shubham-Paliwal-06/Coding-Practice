#include <stdio.h>
#include <conio.h>


int sum(int, int);
int sumref(int *, int *);
void swap(int *, int *);

int sum(int a, int b){
    a = 6; // Sum function cannot change x using a because copy of x is provided to sum in a
    return a + b;
}

// Sum should change the value of x
int sumref(int *a, int *b){
    *a = 6;
    return (*a + *b);
}

void swap (int *x, int *y)
{
int temp;
temp = *x;
*x = *y;
*y = temp;
}

int main(){

    // Call by value function
    int x = 1, y=6;
    printf("The sum of 1 and 6 is %d\n", sum(x, y));
    printf("The value of x is %d\n", x);

    // Call by reference function
    int p = 1, q = 6;
    printf("The sum of 1 and 6 is %d\n", sumref(&p, &q));
    printf("The value of p is %d\n", p);


    // Swapping values of c and d
    int c = 3;
    int d = 4; // a is 3 and b is 4
    printf("c = %d and d = %d\n", c, d);
    swap(&c, &d);
    printf("c = %d and d = %d\n", c, d);

    return 0;
}