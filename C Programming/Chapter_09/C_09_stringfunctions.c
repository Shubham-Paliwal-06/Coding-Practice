#include <stdio.h>
#include <conio.h>
#include <string.h>

int main()
{

    char st1[] = "Shubham";
    printf("%d\n", strlen(st1));

    char target[30];
    strcpy (target,st1); //target now contains "Shubham"
    printf("%s\n%s\n", st1, target);

    char st2[30] = "Hello!, ";
    strcat(st2, st1);
    printf("%s\n", st2);

    int a = strcmp("deep", "joke"); // DJ is negative
    printf("%d\n", a);

    return 0;

}