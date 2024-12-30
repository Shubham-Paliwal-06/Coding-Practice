#include <stdio.h>
#include <conio.h>

int main()
{

    // Type Conversion
    // Implicit type casting
    float a = 9.0;
    int b = 2;
    float c = a/b;
    int d = 6.7;
    printf("The value of a/b is %f\n", c);
    printf("The value of d is %d\n", d);

    // Explicit type casting
    int n = 45;
    float m = 32.23;

    n = (int) m; // convert the data type to int
    printf("%d\n", n);

    return 0;

}

/*
Type conversion: In C programming, it refers to the process of converting one data type to another. In C, type conversion can happen either implicitly (automatically) or explicitly (manually).

1. Implicit type conversion: The C compiler automatically performs this conversion when it encounters a situation where two different data types are involved in an expression, and it tries to "promote" the smaller data type to a larger one to avoid data loss or errors.
(a) From int to float: If an int value is used in a calculation with a float value, the int is automatically converted to float
(b) From int to double: If an int is involved in an operation with a double, the int is promoted to a double
(c) From char to int: A char is automatically promoted to int if used in an expression with int

2. Explicit type conversion: Explicit type conversion, also known as type casting, occurs when the programmer explicitly specifies the type conversion. This is done using type casting operators to convert a variable from one data type to another.
(a) From float to int: If you want to convert a float to int, it is necessary to cast it explicitly. However, this may lead to truncation (i.e., the fractional part will be discarded)
(b) From double to float: If you want to convert a double to a float, you can use explicit casting because double has more precision than float, so some precision may be lost
(c) From int to char: You can explicitly cast an int to a char, but this could cause data loss if the integer value exceeds the range of the char
(d) From int to float: You can explicitly cast an int to float when you need to ensure the value is treated as a floating-point number, especially for division operations


When different data types are involved in an expression, C will generally promote the lower data type to a higher data type according to a set of rules known as "usual arithmetic conversions".
*/