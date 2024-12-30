#include <stdio.h>
#define PIE 3.14159

float calcrectarea(float length,float breadth) {
    return length*breadth;
}
float calccirclearea(float radius) {
    return PIE*radius*radius;
}
float simpleinterest(float principal, float years, float rateofinterest){
    return principal*years*rateofinterest/100;
}

int main() {

    // Problem 1.(a)
    float a = 5.93, b = 4.35;
    printf("Area of rectangle using hard code inputs is: %.4f\n", calcrectarea(a,b));
    
    // Problem 1.(b)
    printf("\nEnter the length of rectangle: ");
    scanf("%f", &a);
    printf("Enter the breadth of rectangle: ");
    scanf("%f", &b);
    printf("Area of rectangle using user inputs is: %.4f\n", calcrectarea(a,b));

    // Problem 2.
    float radius;
    printf("\nEnter the radius of circle: ");
    scanf("%f",&radius);
    printf("The area of the circle is: %f\n",calccirclearea(radius));
    float height;
    printf("\nEnter the height of cylinder: ");
    scanf("%f",&height);
    printf("The volume of the cylinder is: %f\n",calccirclearea(radius)*height);

    // Problem 3.
    float degreeC;
    printf("\nEnter the temperature in degree celsius: ");
    scanf("%f",&degreeC);
    float degreeF = (degreeC*9/5) + 32;
    printf("The temperature in degree fahrenheit is: %f\n",degreeF);

    // Problem 4.
    float p,r,t;
    printf("\nEnter the principal amount: ");
    scanf("%f",&p);
    printf("Enter the rate of interest: ");
    scanf("%f",&r);
    printf("Enter the number of years: ");
    scanf("%f",&t);
    printf("The calculated Simple Interst is: %f\n",simpleinterest(p,t,r));

    return 0;
}