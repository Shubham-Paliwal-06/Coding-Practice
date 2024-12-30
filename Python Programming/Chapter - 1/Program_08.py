# Author: Shubham Paliwal

# Write a program to calculate the average of two numbers and print their deviation
num1, num2 = [float(x) for x in input("Enter the two numbers: ").split()]
average = (num1 + num2) / 2
dev1 = num1 - average
dev2 = num2 - average
print(f"The average of two numbers is:{average}\nThe deviation of {num1} is: {dev1}\nthe deviation of {num2} is: {dev2}")