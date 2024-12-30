# Author: Shubham Paliwal

# Write a program to calculate GCD of two numbers
num1, num2 = [int(x) for x in input("Enter the two numbers separated by comma(,): ").split(",")]
if (num1 > num2):
    dividend = num1
    divisor = num2
else:
    dividend = num2
    divisor = num1
while (divisor != 0):
    remainder = dividend % divisor
    dividend = divisor
    divisor = remainder
print(f"The GCD of {num1} and {num2} is: {dividend}")