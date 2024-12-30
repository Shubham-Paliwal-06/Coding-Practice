#include <stdio.h>
#include <conio.h>

int main()
{

    // FILE *ptr;
    // ptr = fopen("shubham.txt", "a");
    // int num, write = 6749;
    // // fscanf(ptr, "%d", &num);        // Will only work if mode is changed from "a" to "r".
    // printf("The number in file is: %d\n", num);
    // fprintf(ptr, "%d", write);
    // fclose(ptr);

    // FILE *ptr1;
    // ptr1 = fopen("shubham2.txt", "r");
    // if (ptr1 == NULL)
    // {
    //     printf("Sorry! The file does not exist.");
    // }
    // else
    // {
    //     fscanf(ptr1, "%d", &num);
    //     printf("The number in file is: %d\n", num);
    // }
    // fclose(ptr1);

    FILE *ptr2;
    char ch;
    ptr2 = fopen("Shubham3.txt", "a");
    fputc('c', ptr2);

    ptr2 = fopen("Shubham3.txt", "r");
    char c = fgetc(ptr2);
    printf("%c", c);

    while(1)
    {
        ch = fgetc(ptr2); // when all the content of a file has been read break the loop!
        printf("%c", ch);
        if (ch == EOF)
        {
        break;
        }
    }

    return 0;

}