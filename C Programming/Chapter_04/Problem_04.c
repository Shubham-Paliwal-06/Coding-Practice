#include <stdio.h>
#include <conio.h>

int main()
{

    // Problem 1.
    int a = 10;
    if (a = 11){
    printf("I am 11\n");
    }
    else {
    printf("I am not 11\n");
    }

    // Problem 2.
    int sub1, sub2, sub3, totalmarks, maxmarks = 300;
    printf("Enter the marks of subject 1: ");
    scanf("%d", &sub1);
    printf("Enter the marks of subject 2: ");
    scanf("%d", &sub2);
    printf("Enter the marks of subject 3: ");
    scanf("%d", &sub3);
    printf("Your entered marks for subject 1 is %d, subject 2 is %d, subject 3 is %d\n", sub1, sub2, sub3);
    totalmarks = sub1 + sub2 + sub3;
    if (sub1<(33/100)*100 || sub2<(33/100)*100 || sub3<(33/100)*100)
    {
        if (totalmarks>=(40/100)*maxmarks)
        {
            printf("Congratulations! You have passed the exam\n");
        }
        
    }
    else {
        printf("Better luck next time! You have failed the exam\n");
    }

    // Problem 3.
    float salary, tax;
    printf("Enter your Salary: ");
    scanf("%f", &salary);

    if (salary <= 250000)
    {
        tax = 0;
    }
    else if (salary > 250000 && salary <=500000)
    {
        tax = 0.05*(salary - 250000);
    }
    else if (salary > 500000 && salary <=1000000)
    {
        tax = 0.05*(500000 - 250000) + 0.2*(salary - 500000);
    }
    else if (salary > 1000000)
    {
        tax = 0.05*(500000 - 250000) + 0.2*(1000000 - 500000) + 0.3*(salary - 1000000);
    }
    printf("The income tax you need to pay is : %.2f\n", tax);

    // Problem 4.
    int year;
    printf("Enter the year: ");
    scanf("%d", &year);
    if (year%400 == 0)
    {
        printf("The year is a leap year\n");
    }
    else if (year%100 == 0)
    {
        printf("The year is not a leap year\n");
    }
    else if (year%4 == 0)
    {
        printf("The year is a leap year\n");
    }
    
    // Problem 5.
    char ch;
    printf("Enter the chaaracter you want to check for lowercase: ");
    scanf("%c", &ch);
    if (ch>=97 && ch<=122)
    {
        printf("The character you enterd is lowercase\n");
    }
    else {
        printf("The character you enterd is not lowercase\n");
    }
    
    // Problem 6.
    int num1, num2, num3, num4, greatest;
    printf("Enter the four numbers: ");
    scanf("%d%d%d%d", &num1, &num2, &num3, &num4);
    greatest = num1;
    if (num1>num2 && num1>num3 && num1>num4)
    {
        greatest = num1;
    }
    else if (num2>num1 && num2>num3 && num2>num4)
    {
        greatest = num2;
    }
    else if (num3>num1 && num3>num2 && num3>num4)
    {
        greatest = num3;
    }
    else if (num4>num1 && num4>num2 && num4>num3)
    {
        greatest = num4;
    }
    printf("The greatest of these four numbers is %d", greatest);

    return 0;

}