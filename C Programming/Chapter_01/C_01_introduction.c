#include <stdio.h>

int main()
{

    // Print a message to the console
    printf("Hello, World\n");

    return 0;
}
/*
1. #include <stdio.h>
Purpose: This is a preprocessor directive that tells the compiler to include the standard input-output library before the program starts compiling.
Why it's needed: The stdio.h library contains functions for input and output operations. In this case, it provides the declaration for the printf() function, which is used to display output on the console.

2. int main()
Purpose: This is the main function, the entry point of every C program. The program execution begins from here. All the instructions go into main function.
Why int?: The int before main() specifies that this function will return an integer value to the operating system when it finishes executing. In C, the return value from main() typically indicates whether the program ran successfully or encountered an error.
Returning 0 indicates success.
Returning a non-zero value usually indicates an error or abnormal termination.

3. {} (Curly Braces)
Purpose: These curly braces {} denote the beginning and end of the function's body. All the code that belongs to main() is placed inside these curly braces.

4. // Print a message to the console
Purpose: This is a comment. Comments are non-executable lines that help explain the code. Everything after // on the same line is ignored by the compiler. This specific comment explains the purpose of the next line of code.

5. printf("Hello, World\n");
Purpose: The printf() function is used to output (print) text to the console (or terminal). It is used as a sample code.
*/