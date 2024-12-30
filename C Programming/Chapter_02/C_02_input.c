#include <stdio.h>

int main()
{
    int i;

    scanf("%d",&i);
    printf("This is %d\v", i);

    // \n – Newline (Line Break)
    // \t – Horizontal Tab
    // \r – Carriage Return
    // \b – Backspace
    // \f – Form Feed
    // \a – Alert (Bell)
    // \\ – Backslash
    // \' – Single Quote
    // \" – Double Quote
    // \0 – Null Terminator
    // \v – Vertical Tab
    printf("Hello\a");
/*
Escape Sequence: An escape sequence is a combination of characters that starts with a backslash (\) followed by one or more characters. It represents a special character or action that cannot be typed directly into the string. Escape sequences are used in strings and character constants to insert special characters like newlines, tabs, or even non-printable characters.
*/

    return 0;
}