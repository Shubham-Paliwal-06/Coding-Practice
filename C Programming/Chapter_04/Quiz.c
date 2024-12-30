#include <stdio.h>
#include <conio.h>

int main()
{

    int marks;
    char grade;
    printf("Enter your marks: ");
    scanf("%d", &marks);

    if (marks > 90 && marks <= 100)
    {
        grade = 'A';
    }
    else if (marks > 80 && marks <= 90)
    {
        grade = 'B';
    }
    else if (marks > 70 && marks <= 80)
    {
        grade = 'C';
    }
    else if (marks > 60 && marks <= 70)
    {
        grade = 'D';
    }
    else if (marks > 50 && marks <= 60)
    {
        grade = 'E';
    }
    else
    {
        grade = 'F';
    }

    printf("Your grade is %c", grade);

    return 0;
}