# Author: Shubham Paliwal

# Write a program to fnd whether a given year is leap year or not
year = int(input("Enter the year: "))
if (year % 400 == 0):
    print(f"{year} ia a leap year")
elif (year % 100 == 0):
    print(f"{year} ia not a leap year")
elif (year % 4 == 0):
    print(f"{year} ia a leap year")
else:
    print("Invalid input")