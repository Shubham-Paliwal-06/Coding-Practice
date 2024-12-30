# Author: Shubham Paliwal

# Write a program to determine whether a person is eligible to vote, also display how many years areleft for the eligibility
age = int(input("Enter the age: "))
if (age<0):
    print("Age Invalid")
elif (age >=0 and age<18):
    print("You are not eligible to vote")
    print(f"You have to ait for another {18 - age} years to cast your vote")
else:
    print("You are eligible to vote")