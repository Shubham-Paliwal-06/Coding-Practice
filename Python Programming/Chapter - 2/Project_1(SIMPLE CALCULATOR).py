# Author: Shubham Paliwal

# Project Name:-  SIMPLE CALCULATOR


def sum(a, b):
    add = a + b
    return add

def sub(a, b):
    minus = a - b
    return minus

def mul(a, b):
    multiply = a * b
    return multiply

def div(a, b):
    division = a / b
    return division

def exp(a, b):
    power = a**b
    return power

def floor(a, b):
    floord = a // b
    return floord

print("*" * 10, "SIMPLE CALCULATOR", "*" *10)

print("Choose the number from 1 - 7 to select the operation you want:-\n1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Exponentiation\n6. Floor Division\n7. EXIT")
opt = int(input("Choose the number: "))
num1, num2 = [float(x) for x in input("Enter the two numbers separated by comma(,): ").split(",")]

if (opt == 1):
    x = sum(num1, num2)
    print(f"The addition of {num1} and {num2} is: {x}")
elif (opt == 2):
    x = sub(num1, num2)
    print(f"The subtraction of {num1} and {num2} is: {x}")
elif (opt == 3):
    x = mul(num1, num2)
    print(f"The multiplication of {num1} and {num2} is: {x}")
elif (opt == 4):
    x = div(num1, num2)
    print(f"The division of {num1} by {num2} is: {x}")
elif (opt == 5):
    x = exp(num1, num2)
    print(f"{num1} raised to the power {num2} is: {x}")
elif (opt == 6):
    x = floor(num1, num2)
    print(f"The floor division of {num1} and {num2} is: {x}")
elif (opt == 7):
    print("You chose to ExIT. BYE!!!")
else:
    print("The operator choosen is invalid.\nPlease select a valid operator.")