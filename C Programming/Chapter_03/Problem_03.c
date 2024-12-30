#include <stdio.h>
#include <conio.h>

int main()
{

    // Problem 1.(a)
    int a=1;
    int b=a;

    // Problem 1.(b)
    int v=3*3;

    // Problem 1.(c)
    // char dt='21 dec 2020';      // Invalid

    // Problem 2.
    float d=3.0/8-2;        // Returns float
    printf("The value of d is: %f\n", d);

    // Problem 3.
    a=4567;
    printf("The value of a%97 is: %d\n", a%97);

    // Problem 4.
    // Explain step by step evaluation of 3*x/y – z+k, where x=2, y=3, z=3, k=1
    int x=2, y=3, z=3, k=1;
    float e = 3*x/y - z+k;
    // 3*x/y - z+k;
    // 6/y - z+k;
    // 2-z+k;
    // -1+k 
    // -1 + 1 
    // 0
    printf("The value of e is %f\n", e);

    // Problem 5.
    float q = 3.0 + 1 ;         // Returns float
    printf("The value of q is %f", q);

    return 0;

}