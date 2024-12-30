# Author: Shubham Paliwal

# Write a program to print the reverse of a number
num = int(input("Enter the number: "))
temp = num
reverse = 0
i = 0
while (num != 0):
    remainder = num % 10
    num = num // 10
    reverse = (reverse * 10) + remainder 
    i += 1
print(f"The {temp} in reverse order is: {reverse}")