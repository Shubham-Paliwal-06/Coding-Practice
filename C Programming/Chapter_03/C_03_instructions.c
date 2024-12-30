#include <stdio.h>
#include <conio.h>

int main()
{

    // Type Declaration (Will give Error in output because of previously defined variable types)
    // int a;         // Declare an integer variable 'a'
    // float b;       // Declare a float variable 'b'
    // int i = 10;    // Declare and initialize 'i' with 10
    // int j = i;     // Declare 'j' and initialize with 'i'
    // int a = 2, b = 3, c = 4, d = 5;     // Declare and initialize multiple variables
    // int j1 = a + j - i;     // Valid: use previously defined variables
    // // Invalid: 'a' is used before declaration
    // // float b = a + 3;
    // // float a = 1.1;
    // // Valid: Assigning the same value to multiple variables
    // int a, b, c, d;
    // a = b = c = d = 30; // a, b, c, d all equal to 30


    // Arithmetic Instructions
    int a = 5;
    int b = 3;
    int c = a + b;
    printf("The value of a is %d and value of b is %d and sum is %d\n", a, b, c);
    // Modulus operator is used to get the remainder
    printf("The remainder when a is divided by b is: %d\n", a%b);

    // This does not work for exponentiation in c
    // int d = a^b;


    return 0;

}

/*
Type Declaration Instruction: It is the instruction of specifying the type of a variable when it is created. This allows the compiler to understand the type of data the variable will hold, such as integers, characters, floating-point numbers, etc.

Arithmetic Instructions: These are used to perform mathematical operations on variables and constants. These operations are executed using arithmetic operators, which include basic operations such as addition, subtraction, multiplication, division, and modulus.
(a) Addition (+): Adds two operands
(b) Subtraction (-): Subtracts the right operand from t)he left operand
(c) Multiplication (*): Multiplies two operands
(d) Division (/): Divides the left operand by the right operand
(e) Modulus (%): Returns the remainder of the division of the left operand by the right operand. This is only valid for integer types
% → returns the remainder
% → cannot be applied on float
% → sign is same as of numerator (-5%2=-1)
(f) Increment (++): Increases the value of the operand by 1. It can be used in two forms:
    (1) Post-increment: a++ (first use a then increment)
    (2) Pre-increment: ++a (first increment a then use it)
(g) Decrement (--): Decreases the value of the operand by 1. It can also be used in two forms:
    (1)Post-decrement: a-- (first use a then decrement)
    (2) Pre-decrement: --a (first decrement a then use it)

Operator Precedence: The following table lists the operator priority in C
        Priority            Operators
            1st               * / %
            2nd               + -
            3rd               =
Operators of higher priority are evaluated first in the absence of parenthesis.

Operator Associativity: When operators of equal priority are present in an expression, the tie is taken care of by associativity.
        x*y/z → (x*y)/z
        x/y*z → (x/y)*z
*, /, % follows left to right associativity

Control Instruction: In C programming, control instructions (also called control flow statements) are used to control the execution order of statements in a program. These instructions allow the program to make decisions, repeat certain actions, or break out of loops.
(a) Decision Control: if, else, else if
(b) Loop Control: for, while, do-while
(c) Case Control: switch
(d) Jump Control: break, continue, goto
*/