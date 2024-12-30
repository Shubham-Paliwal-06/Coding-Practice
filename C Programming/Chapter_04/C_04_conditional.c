#include <stdio.h>
#include <conio.h>

int main()
{

    // if statement
    int age = 15;
    if(age>10){
        printf("We are inside if\n");
        printf("Your age is greater than 10\n");
    }
    if(age%5==0){
        printf("We are inside another if\n");
        printf("Your age is divisible by 50\n");
    }

    // If-else statement
    if(age>15){
        printf("We are inside if\n");
        printf("Your age is greater than 10\n");
    }
    else{
        printf("Your age is not grater than 10\n");
    }

    // Non-zero value is considered true
    if(1){
        printf("This if is executed!\n");
    }
    if(2345){
        printf("This if is also executed!\n");
    }
    if(2.74){
        printf("This if is also executed!\n");
    }
    if('c'){
        printf("This character inside if is also executed!\n");
    }
    if(0){
        printf("I am zero - I am not executed\n");
    }

    // Logical Operator
    int a=1, b=1;
    printf("The value of a and b is %d\n", a&&b);
    printf("The value of a or b is %d\n", a||b);
    printf("The value of not(a) is %d\n", !a);

    if(a && b){
        printf("both are true\n");
    }
    // is same as writing ....
    if(a){
        if(b){
            printf("both are true");
        }
    }

    // Else-if Statement
    int yourage = 45;
    if(yourage>60){
        printf("You can drive and you are a senior citizen");
    }
    else if(yourage>40){
        printf("You can drive and you are elder");
    } 
    else if(yourage>18){
        printf("You can drive");
    }
    else{
        printf("You cannot drive");
    }

    // Ternary
    // condition ? expression-if-true : expression-if-false
    int c = 345;
    int d = 345452;
    a>b?printf("a is greater"):printf("b is greater");

    return 0;
}

/*
Relational Operator: Relational operators are used to evaluate conditions (true or false) inside the if
statements Some of them are- ==, >=, >, <, <=, !=

The condition can be any valid expression. In C a non-zero value is considered to be
true.

Logical Operator: &&, || and !, are three logical operators in C. These are read as “AND”, “OR” and “NOT”. They are used to provide logic to our C programs.
*/