# Author: Shubham Paliwal

# Write a program to find largest of two numbers
num1, num2 = [float(x) for x in input("Enter the two numbers ypu want to compare: ").split()]
if (num1 > num2):
    print(f"{num1} is greater than {num2}")
else:
    print(f"{num2} is greater than {num1}")