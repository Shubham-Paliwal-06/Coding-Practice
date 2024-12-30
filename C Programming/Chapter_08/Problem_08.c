#include <stdio.h>
#include <conio.h>

void reverse(int a[], int n) {
    for (int i = 0; i < n/2; i++)
    {
        int temp = a[i];
        a[i] = a[n - i - 1];
        a[n - i - 1] = temp;
    }
    
}
void printarray(int a[], int n) {
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }
    printf("\n");
}

int positiveno(int a[], int n) {
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if(a[i]>0){
            count++;
        }
    }
    return count;
}

int main()
{

    // // Problem 1.
    // int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    // int *ptr = arr;
    // printf("The value at address %u is: %d", ptr + 2, *(ptr + 2));

    // // Problem 2.
    // If S[3] is a 1-D array of integers then *(S+3) refers to the third element:
    // (i) True.
    // (ii) False.         // Correct Answer
    // (iii) Depends

    // // Problem 3.
    // int table[10];
    // printf("Table of 5 is:\n");
    // for (int i = 0; i < 10; i++)
    // {
    //     table[i] = 5 * (i + 1);
    //     printf("5 * %d = %d\n", i+1,  table[i]);
    // }

    // // Problem 4.
    // int tableuser[10], n;
    // printf("Enter the number: ");
    // scanf("%d", &n);
    // printf("Table of %d is:\n", n);
    // for (int i = 0; i < 10; i++)
    // {
    //     tableuser[i] = n * (i + 1);
    //     printf("%d * %d = %d\n", n, i+1,  tableuser[i]);
    // }

    // // Problem 5.
    // int rev[] = {1, 2, 3, 4, 5, 6, 7};
    // printarray(rev, 7);
    // reverse(rev, 7);
    // printarray(rev, 7);

    // // Problem 6.
    // int array[] = {1, -5, 6, 8, 9, 2, 10, -79, -24, 57, -8, -45};
    // positiveno(array, 12);
    // printf("The number of positive integers in the array are: %d", positiveno(array, 12));

    // // Problem 7.
    // int multiple[3][10], number[3];
    // printf("Enter the three numbers: ");
    // for (int i = 0; i < 3; i++)
    // {
    //     scanf("%d", &number[i]);
    // }
    // printf("The multiplication table of the numbers is: \n");
    // for (int i = 0; i < 10; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         multiple[j][i] = number[j];
    //         printf("%d * %d = %d\t", number[j], i + 1, number[j] * (i + 1));
    //     }
    //     printf("\n");
    // }
    

    // Problem 8.
    // Already solved in problem 7

    // // Problem 9.
    // int threedimensional[3][4][5];
    // int *ptr = threedimensional;
    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 4; j++)
    //     {
    //         for (int k = 0; k < 5; k++)
    //         {
    //             printf("The address of index threedimensional[%d][%d][%d] is: %u\n", i, j, k, ptr);
    //             ptr++;
    //         }
    //     }
    // }
    

    return 0;

}