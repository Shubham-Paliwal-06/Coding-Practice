#include <stdio.h>
#include <conio.h>

int main()
{

    // While loop
    int i = 0;
    while (i<4)
    {
        printf("Happy Birthday\n");
        i++;
    }
    // while (2<10)                         // Infinite Loop Example
    // {
    //     printf("Happy Birthday\n");
    //     i++;
    // }

    // Do-while Loop
    int j = 0;
    do
    {
        printf("The value of j is %d\n", j);
        j++;
    } while (j<4);

    // For Loop
    int n = 6;
    for (int i = 0; i < n; i++)
    {
        printf("The value of i is %d\n", i);
    }

    for (int i = n; i > 0; i--)
    {
        if (i==3)
        {
            break;
        }
        printf("%d\n", i);
    }

    for (int i = n; i > 0; i--)
    {
        if (i==3)
        {
            continue;
        }
        printf("%d\n", i);
    }
    

    return 0;

}