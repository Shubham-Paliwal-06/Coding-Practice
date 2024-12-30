# Author: Shubham Paliwal

# Write a program to find the factorial of a number entered by the user
n = int(input("Enter the number: "))
factorial = 1
for i in range(n,0,-1):
    factorial = factorial * i
print(f"The factorial of {n} is: {factorial}")