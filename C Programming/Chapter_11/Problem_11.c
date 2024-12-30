#include <stdio.h>
#include <conio.h>

int main()
{

    // Problem 1.
    FILE *ptr;
    // int num1, num2, num3;
    // ptr = fopen("read.txt", "r");
    // fscanf(ptr, "%d %d %d", &num1, &num2, &num3);
    // printf("The numbers read are: %d\t%d\t%d\n", num1, num2, num3);

    // // Problem 2.
    // int a = 8;
    // ptr = fopen("read.txt", "a");
    // for (int i = 1; i < 11; i++)
    // {
    //     fprintf(ptr, "%d * %d = %d\n", a, i, a*i);
    // }
    
    // // Problem 3.
    // ptr = fopen("read.txt", "r");
    // char ch;
    // FILE *ptr1;
    // ptr1 = fopen("new.txt", "w");
    // for (int i = 0; i < 2; i++)
    // {
    //     while (1)
    //     {
    //         ch = fgetc(ptr); // when all the content of a file has been read break the loop!
    //         if (ch == EOF)
    //         {
    //             break;
    //         }
    //         else
    //         {
    //             fprintf(ptr1, "%c", ch);
    //         }
    //     }
    // }
    

    // // Problem 4.
    // char name1[34], name2[34];
    // int salary1, salary2;
    // ptr = fopen("salary.txt", "w");

    // printf("Enter the name of Employee 1\n");
    // scanf("%s", name1);

    // printf("Enter the salary of Employee 1\n");
    // scanf("%d", &salary1);

    // printf("Enter the name of Employee 2\n");
    // scanf("%s", name2);

    // printf("Enter the salary of Employee 2\n");
    // scanf("%d", &salary2);

    // fprintf(ptr, "%s", name1);
    // fprintf(ptr, "%s", ", ");
    // fprintf(ptr, "%d", salary1);
    // fprintf(ptr, "%c", '\n');
    // fprintf(ptr, "%s", name2);
    // fprintf(ptr, "%s", ", ");
    // fprintf(ptr, "%d", salary2);
    // fprintf(ptr, "%c", '\n');

    // Problem 5.
    int num;
    ptr = fopen("int.txt", "r");
    fscanf(ptr, "%d", &num); 

    fclose(ptr);

    ptr = fopen("int.txt", "w");
    fprintf(ptr, "%d", 2*num); 

    fclose(ptr);

    return 0;

}