# Write a program of simple calculator using two operands
num1, num2 = [int(x) for x in input("Enter the two operands: ").split()]
opt = str(input("Enter a valid operator: "))
if (opt == "+"):
    print(f"The sum of {num1} and {num2} is: {num1 + num2}")
elif (opt == "-"):
    print(f"The subtract of {num1} and {num2} is: {num1 - num2}")
elif (opt == "*"):
    print(f"The multiply of {num1} and {num2} is: {num1 * num2}")
elif (opt == "/"):
    print(f"The division of {num1} and {num2} is: {num1 / num2}")
elif (opt == "//"):
    print(f"The floor division of {num1} and {num2} is: {num1 // num2}")
elif (opt == "**"):
    print(f"The exponentiation of {num1} and {num2} is: {num1 ** num2}")
elif (opt == "%"):
    print(f"The modulo of {num1} and {num2} is: {num1 % num2}")
else:
    print("Invalid operator")