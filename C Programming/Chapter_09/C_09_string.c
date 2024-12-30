#include <stdio.h>
#include <conio.h>
#include <string.h>

int main()
{

    char st[100];
    printf("Enter the string: ");
    gets(st);
    int characters = 0, i = 0;
    while (st[i]!='\0')
    {
        characters++;
        i++;
    }
    printf("Your entered string is: %s\n", st);
    printf("The number of characters in string are: %d\n", characters);

    return 0;

}