#include <stdio.h>

int main()
{
    int a; // Variable Declaration
    a = 1; // Variable Initialisation
    printf("Variable without change: %d\n", a);
    a = 5;
    printf("Variable after change: %d\n", a);

    const int max_value = 100; // Declaring a constant integer MAX_VALUE with value 100
    printf("Constant without change: %d\n", max_value);
//  max_value = 300;
//  After assigning the above value to constant we get an error stating not modifiable 
    return 0;
}

/* Rules to Declare a Variable Name
1. First character must be an alphabet or underscore (_)
2. No commas, blanks are allowed.
3. No special symbol other than (_) allowed.
4. Variable names are case sensitive.
*/

/*
Variable: A variable is a named storage location in memory that can hold a value that may change during program execution. The value of a variable can be modified as needed in the program.
Constant: A constant is a type of variable whose value cannot be changed during the program execution. Constants are used to store values that remain fixed throughout the program.
Keyword: Keywords are essential to C programming because they define how the language works, from controlling program flow to managing memory and declaring variables. These words are predefined, reserved words, and cannot be used as identifiers.
*/