# Author: Shubham Paliwal

# Write a program to enter a decimal number and display the binary equivalent of the number
num = int(input("Enter the number: "))
temp = num
binary = 0
remainder = 0
i = 0
while (num != 0):
    remainder = num % 2
    num = num // 2
    binary = binary + (remainder * (10**i))
    i += 1
print(f"The binary equivalent of {temp} is: {binary}")




# Write a program to enter a binary number and display the decimal equivalent of the number
number = int(input("Enter the binary number: "))
temp = number
decimal = 0
i = 0
while (number != 0):
    ones = number % 10
    decimal = decimal + (ones * (2**i))
    number = number // 10
    i += 1
print(f"The decimal equivalent of {temp} is: {decimal}")