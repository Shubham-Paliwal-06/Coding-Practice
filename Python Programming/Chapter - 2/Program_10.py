# Author: Shubham Paliwal

# Write a program to calculate the roots of a quadratic equation
a, b, c = [int(x) for x in input("Enter the value of coefficients separated by a comma(,): ").split(",")]
print(f"The quadratic equation you entered is {a}x*x + {b}x + {c} = 0")
discriminant = (b*b) - (4*a*c)
deno = 2*a
if (discriminant < 0):
    print("The roots are imaginary and distinct")
    real = -b/deno
    imaginary = ((-discriminant)**0.5)/deno
    root1 = complex(real, imaginary)
    root2 = complex(real, -imaginary)
    print(f"The roots of the quadratic equation are: {root1}, {root2}")
elif (discriminant == 0):
    print("The roots are real and equal")
    root1 = -b/deno
    print(f"The roots of the quadratic equation are: {root1}, {root1}")
else:
    print("The roots are real and distint")
    root1 = (-b + (discriminant**0.5))/deno
    root2 = (-b - (discriminant**0.5))/deno
    print(f"The roots of the quadratic equation are: {root1}, {root2}")