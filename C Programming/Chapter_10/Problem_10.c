#include <stdio.h>
#include <conio.h>

typedef struct vector
{
    int i;
    int j;
} vec;

typedef struct complex
{
    int a;
    int b;
} complexNo;

typedef struct bank
{
    long int bank_acc_no;
    char username[30];
    char ifsc[12];
    long int bank_balance;
} bank_acc;

typedef struct date
{
    int date;
    int month;
    int year;
} date_data;

struct vector sumvector(struct vector a, struct vector b)
{
    vec sum = {(a.i + b.i), (a.j + b.j)};
    return sum;
}

void display(complexNo c)
{
    printf("The complex no is %d + i%d", c.a, c.b);
}

int compare(date_data d1, date_data d2)
{
    if ((d1.year == d2.year) && (d1.month == d2.month) && (d1.date == d2.date))
    {
        return 0;
    }
    if(d1.year > d2.year)
    {
        return 1;
    }
    else if (d1.month > d2.month)
    {
        return 1;
    }
    else if (d1.date > d2.date)
    {
        return 1;
    }
    if(d1.year < d2.year)
    {
        return -1;
    }
    else if (d1.month < d2.month)
    {
        return -1;
    }
    else if (d1.date < d2.date)
    {
        return -1;
    }
}
int main()
{

    // // Problem 1.
    // vec v = {1, 2};
    // printf("The value of vector is %di + %dj\n", v.i, v.j);

    // // Problem 2.
    // vec w = {5, 3};
    // vec sum = sumvector(v, w);
    // printf("The value of vector is %di + %dj\n", sum.i, sum.j);

    // Problem 3.
    // Twenty integers are to be stored in memory. What will you prefer- Array or structure?        // Array

    // // Problem 4.
    // vec *ptr;
    // ptr = &v;
    // printf("%d\n", (*ptr).i);
    // printf("%d\n", ptr->i);

    // // Problem 5.
    // complexNo num = {5, 7};
    // printf("The complex no is %d + i%d", num.a, num.b);

    // // Problem 6.
    // complexNo carr[5];
    // for (int i = 0; i < 5; i++)
    // {
    //     printf("Enter real part: ");
    //     scanf("%d", &carr[i].a);
    //     printf("Enter imaginary part: ");
    //     scanf("%d", &carr[i].b);
    //     display(carr[i]);
    // }

    // Problem 7.
    // Done in problem 5.

    // Problem 8.
    // Done

    // // Problem 9.
    // date_data d1 = {12, 4, 2004};
    // date_data d2 = {12, 4, 2005};
    // printf("%d", compare(d1, d2));

    // // Problem 10.
    // Done in Problem 9.

    return 0;

}