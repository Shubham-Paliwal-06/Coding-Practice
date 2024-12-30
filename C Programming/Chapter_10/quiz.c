#include <stdio.h>
#include <conio.h>

struct employee
{
    int code;
    float salary;
    char name[20];
};

int main()
{

    struct employee e[3];

    for (int i = 1; i <= 3; i++)
    {
        printf("Enter code of employee %d: ", i);
        scanf("%d", &e[i].code);
        printf("Enter name of employee %d: ", i);
        scanf("%s", &e[i].name);
        printf("Enter salary of employee %d: ", i);
        scanf("%f", &e[i].salary);

        printf("Employee %d:\nEmployee Code - %d\nEmployee Name - %s\nEmployee Salary - %f\n", i, e[i].code, e[i].name, e[i].salary);
    }

    return 0;

}