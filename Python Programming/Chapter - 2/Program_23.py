# Author: Shubham Paliwal

# Write a program to calculate the value of an investment over years
principal = int(input("Enter the initial investment amount: "))
ROI = int(input("Enter the rate of interest: "))
years = int(input("Enter the time of investment in years: "))
total_amt = principal
print("YEAR\t\tVALUE")
print("*" * 20)
for i in range(1, years + 1):
    total_amt = total_amt + ((ROI/100)*principal)
    principal = total_amt
    print(f"{i}\t\t{total_amt}")
