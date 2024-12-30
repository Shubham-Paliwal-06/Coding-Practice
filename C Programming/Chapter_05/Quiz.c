#include <stdio.h>
#include <conio.h>

int main()
{

    // Quiz 1- : Write a program to print natural numbers from 10 to 20 when initial loop counter is initialized to 0.
    int i = 0;
    while (i<=20)
    {
        if (i>=10)
        {
            printf("The value of i is %d\n", i);
        }
        i++;
    }
    
    // Quiz 2-  Write a program to print first ‘n’ natural number using do-while loop
    int j = 1, n;
    printf("Enter the value of n: \n");
    scanf("%d", &n);
    printf("The natural numbers are: \n");
    do
    {
        printf("%d\n", j);
        j++;
    } while (j<=n);

    // Quiz 3- Write a program to print first ‘n’ natural numbers using for loop
    for (int i = 1; i <= n; i++)
    {
        printf("%d\n", i);
    }
    
    // Quiz 3- Write a program to print ‘n’ natural numbers in reverse order
    for (int i = n; i > 0; i--)
    {
        printf("%d\n", i);
    }
    

    return 0;

}