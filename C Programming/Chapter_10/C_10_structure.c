#include <stdio.h>
#include <conio.h>
#include <string.h>

struct employee
{
    int code;
    float salary;
    char name[20];
};

int main()
{

    struct employee e1, e2;
    e1.code = 01;
    strcpy(e1.name, "Shubham");
    e1.salary = 54.44;
    printf("%d %s %f\n", e1.code, e1.name, e1.salary);
    e2.code = 02;
    strcpy(e2.name, "Shashank");
    e2.salary = 34.56;
    printf("%d %s %f\n", e2.code, e2.name, e2.salary);

    struct employee *ptr;
    ptr = &e1;
    printf("%d\n", (*ptr).code);
    printf("%d\n", ptr->code);        // Exactly same as (*ptr).code

    return 0;

}