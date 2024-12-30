# Author: Shubham Paliwal

# Write a program to enter any character. If the entered chracter is in lower case the convert it into the upper case character and vice versa
char = input("Enter the character: ")
if (char.islower()):
    change = char.upper()
    print(f"The {char} entered is in lower case after converting into upper case the character is {change}")
elif (char.isupper()):
    change = char.lower()
    print(f"The {char} entered is in upper case after converting into lower case the character is {change}")