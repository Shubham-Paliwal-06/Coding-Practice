# Write a program to to enter a number and dislay its hex and octal equivalents and its square root
num = int(input("Enter the number: "))
print(f"The hex equivalent of {num} is", hex(num))
print(f"The octal equivalent of {num} is", oct(num))
print(f"The square root of {num} is", num**0.5)