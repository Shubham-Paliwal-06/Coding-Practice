#include <stdio.h>
#include <conio.h>

int strlen(char string[]){
    int i = 0;
    char c = string[i];
    while (c!='\0')
    {
        c = string[i];
        i++;
    }
    return i - 1;
}
int slice(char string[], int m, int n){
    int i = 0;
    char *ptr1 = &string[m];
    char *ptr2 = &string[n];

    string = ptr1;
    string[n] = '\0';
    return string;
}
void mystrcpy(char target[], char source[])
{
    for (int i = 0; i < strlen(source); i++)
    {
        target[i] = source[i];
    }
    target[strlen(source)] = '\0';
}

int main()
{

    // Problem 1.
    // Which of the following is used to appropriately read a multi-word string.
    // 1. gets()            // Correct Answer
    // 2. puts()
    // 3. printf()
    // 4. scanf()

    // // Problem 2.
    // char str[6];
    // // scanf("%s", str);
    // for (int i = 0; i < 5; i++)
    // {
    //     scanf("%c", &str[i]);
    //     fflush(stdin); // For not scanning new line character
    // }
    // str[5] = '\0';

    // printf("%s\n", str);

    // // Problem 3.
    // char string[] = "Shubham";
    // printf("%d\n", strlen(string));
    
    // // Problem 4.
    // printf("%s\n", slice(string, 1, 5));

    // // Problem 5.
    // char source[] = "ervubawrgb";
    // char target[30];
    // mystrcpy(target, source); // target now contains "ervubawrgb"
    // printf("%s\n%s\n", source, target);

    // // Problem 6.
    // char encrypt[] = "Mera saara paisa takiye ke neeche black poly me hai";
    // for (int i = 0; i < strlen(encrypt); i++)
    // {
    //    encrypt[i] = encrypt[i] + 1;
    // }

    // printf("%s\n", encrypt);

    // // Problem 7.
    // char decrypt[strlen(encrypt) + 1];
    // mystrcpy(decrypt, encrypt);
    // for (int i = 0; i < strlen(decrypt); i++)
    // {
    //    decrypt[i] = decrypt[i] - 1;
    // }

    // printf("%s\n", decrypt);

    // // Problem 8.
    // char c = 'h';
    // int count = 0;
    // char str[] = "Shubham";
    // for (int i = 0; i < strlen(str); i++)
    // {
    //    if(str[i] == c){
    //     count++;
    //    }
    // }

    // printf("%d\n", count);
    
    // // Problem 9.
    // char x = 'h';
    // char checkstr[] = "Shubham";
    // int present = 0;
    // for (int i = 0; i < strlen(checkstr); i++)
    // {
    //     if(checkstr[i] == c){
    //         present = 1;
    //     }
    // }
    // if (present == 1)
    // {
    //     printf("the character is present in string\n");
    // }
    // else
    // {
    //     printf("the character is not present in string\n");
    // }
    
    // printf("%d\n");

    return 0;
}