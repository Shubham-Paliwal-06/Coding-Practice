#include <stdio.h>

int main()
{
    int a = 67;
    float b;
    b = 3.14;
    char c = '$';
    double d = 3.14;
    long int e = 84586;
    short int f = 4;
    unsigned int g = 5674;
    void *ptr;

    printf("Size of int: %zu bytes\n", sizeof(a));
    printf("Size of float: %zu bytes\n", sizeof(b));
    printf("Size of char: %zu bytes\n", sizeof(c));
    printf("Size of double: %zu bytes\n", sizeof(d));
    printf("Size of long int: %zu bytes\n", sizeof(e));
    printf("Size of short int: %zu bytes\n", sizeof(f));
    printf("Size of unsigned int: %zu bytes\n", sizeof(g));
    printf("Size of void*: %zu bytes\n", sizeof(*ptr));

    return 0;
}