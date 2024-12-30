# Author: Shubham Paliwal

# Write a program to determine the character enterd by the user
char = input("Enter a character: ")
if (char.isalpha()):
    print("The character you enterd is an alphabet")
elif (char.isdigit()):
    print("The character you enterd is a digit")
elif (char.isspace()):
    print("The character you enterd is a whitespace")
else:
    print("You enterd an invalid character")