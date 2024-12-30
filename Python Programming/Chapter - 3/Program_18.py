# Author: Shubham Paliwal

# Write a program to print the multiplication table of number entered by the user
n = int(input("Enter the number: "))
print(f"Multiplication table of {n} is ---")
for i in range(1, 11):
    print(f"{n} * {i} = {n*i}")