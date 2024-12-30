#include <stdio.h>
#include <conio.h>

// Function Prototype
int sum(int, int);
int factorial(int);

// Function Definition
int sum(int x, int y) {
    printf("The sum is %d\n", x + y);
    return x + y;
}

// Recursive function
int factorial(int a) {
    if (a == 1 || a == 0)
    {
        return 1;
    }
    
    return a * factorial(a - 1);
}

int main()
{

    int a = 34, b = 67;
    // Calling Function
    sum(a, b);

    printf("The factorial of 4 is %d", factorial(4));

    return 0;

}

/*
Functions: A function is a block of code that performs a specific task. It allows us to divide a program into smaller, manageable pieces. Functions are crucial for reusability, readability, and modularity.
*/