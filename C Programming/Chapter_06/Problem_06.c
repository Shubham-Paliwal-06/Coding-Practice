#include <stdio.h>
#include <conio.h>
#define g 9.8

float avg(int, int, int);
float changetemp(float c);
float force(float);
int fibbonacci(int);
int sum(int);
void pattern(int);

float avg(int a, int b, int c) {
    printf("The average of three numbers is: %.4f\n",(a + b + c) / 3.0);
}

float changetemp(float c) {
    printf("The temperature from celsius to fahranheit is: %.4f\n", ((c * 9) / 5) + 32);
}

float force(float mass) {
    printf("The force on mass is: %.4f\n", mass * g);
}

int fibbonacci(int n) {
    if (n==1 || n==2)
    {
        return n - 1;
    }
    
    return fibbonacci(n - 1) + fibbonacci(n - 2);
}

int sum(int n) {
    if (n==1)
    {
        return 1;
    }
    
    return n + sum(n - 1);
}

void pattern(int n) {
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < (2*i-1); j++)
        {
            printf("*");
        }
        printf("\n");
    }
    
}

int main()
{

    // Problem 1.
    avg(34, 67, 38);

    // Problem 2.
    changetemp(100);
    
    // Problem 3.
    force(67.9);

    // Problem 4.
    int n = 7;
    printf("The fibbonacci series for %d terms is %d\n", n, fibbonacci(n));

    // Problem 5.
    // What will the following line produce in a C program:
    // int a = 4;
    // printf("%d %d %d \n", a, ++a, a++);      // Output is 6,6,4     Compiler Evaluation order is from right to left

    // Problem 6.
    printf("The sum of first five natural numbers is: %d\n", sum(5));

    // Problem 7.
    pattern(5);


    return 0;

}