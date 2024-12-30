# Author: Shubham Paliwal

# Write a program to determine wheter a character entered is a vowel or not
char = input("Enter the character: ")
char = char.upper()
if (char == "A" or char == "E" or char == "I" or char == "O" or char == "U"):
    print("The character you entered is a vowel")
else:
    print("The character you entered is not a vowel")