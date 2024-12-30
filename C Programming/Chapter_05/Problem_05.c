#include <stdio.h>
#include <conio.h>

int main()
{

    // // Problem 1.
    // int n;
    // printf("Enter the number n: ");
    // scanf("%d", &n);
    // for (int i = 1; i < 11; i++)
    // {
    //     printf("%d * %d = %d\n", n, i, n * i);
    // }

    // // Problem 2.
    // int a = 10;
    // for (int i = 10; i > 0; i--)
    // {
    //     printf("%d * %d = %d\n", a, i, a * i);
    // }

    // // Problem 3.
    // A do while loop is executed:
    // a. At least once.            // Correct answer
    // b. At least twice.
    // c. At most once.

    // // Problem 4.
    // What can be done using one type of loop can also be done using the other two types of loops – true or false?         // True

    // // Problem 5.
    // int sum = 0, i = 1;
    // while (i <= 10)
    // {
    //     sum = sum + i;
    //     i++;
    // }
    // printf("The sum of first ten natural numbers is: %d\n", sum);

    // // Problem 6.
    // int forsum = 0;
    // for (int i = 1; i <= 10; i++)
    // {
    //     forsum = forsum + i;
    // }
    // printf("The sum of first ten natural numbers is: %d\n", forsum);

    // int dowhilesum = 0, j = 1;
    // do
    // {
    //     dowhilesum = dowhilesum + j;
    //     j++;
    // } while (j<=10);
    // printf("The sum of first ten natural numbers is: %d\n", dowhilesum);

    // // Problem 7.
    // int b = 8, sum8 = 0;
    // for (int i = 1; i <= 10; i++)
    // {
    //     sum8 = sum8 + (b * i);
    // }
    // printf("The sum of ten multiples of 8 is: %d\n", sum8);

    // // Problem 8.
    // long int fact, factorial = 1;
    // printf("Enter the number: ");
    // scanf("%ld", &fact);
    // for (int i = fact; i > 0; i--)
    // {
    //     factorial *= i;
    // }
    // printf("The factorial of given number is: %ld\n", factorial);

    // // Problem 9.
    // int x = 0;
    // while (x < 100)
    // {
    //     printf("8");
    //     x++;
    // }

    // // Problem 10.
    // int prime, check = 0;
    // printf("Enter the number: ");
    // scanf("%d", &prime);
    // if (prime == 0 || prime == 1)
    // {
    //     check = 1;
    // }
    // else
    // {
    //     for (int i = 2; i <= prime / 2; i++)
    //     {
    //         if (prime % i == 0)
    //         {
    //             check = 1;
    //             break;
    //         }
    //     }
    // }
    // if (check == 0)
    // {
    //     printf("The given number is a prime number");
    // }
    // else if (check == 1)
    // {
    //     printf("The given number is not a prime number");
    // }

    // // Problem 11.
    // // Using while loop
    // check = 0;
    // printf("Enter the number: ");
    // scanf("%d", &prime);
    // if (prime == 0 || prime == 1)
    // {
    //     check = 1;
    // }
    // else
    // {
    //     int i = 2;
    //     while ( i <= prime / 2)
    //     {
    //         if (prime % i == 0)
    //         {
    //             check = 1;
    //             break;
    //         }
    //         i++;
    //     }
    // }
    // if (check == 0)
    // {
    //     printf("The given number is a prime number");
    // }
    // else if (check == 1)
    // {
    //     printf("The given number is not a prime number");
    // }

    // // Using do while loop
    // check = 0;
    // printf("Enter the number: ");
    // scanf("%d", &prime);
    // if (prime == 0 || prime == 1)
    // {
    //     check = 1;
    // }
    // else
    // {
    //     int i = 2;
    //     do 
    //     {
    //         if (prime % i == 0)
    //         {
    //             check = 1;
    //             break;
    //         }
    //         i++;
    //     } while (i <= prime / 2);
    // }
    // if (check == 0)
    // {
    //     printf("The given number is a prime number");
    // }
    // else if (check == 1)
    // {
    //     printf("The given number is not a prime number");
    // }

    return 0;
}