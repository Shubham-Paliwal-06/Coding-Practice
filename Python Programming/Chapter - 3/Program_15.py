# Author: Shubham Paliwal

# Write a program to enter a number and then calculate the sum of its digits
num = int(input("Enter the number: "))
temp = num
sum = 0
i = 0
while (num != 0):
    remainder = num % 10
    num = num // 10
    sum = sum + remainder
print(f"The sum of digits of {temp} is: {sum}")