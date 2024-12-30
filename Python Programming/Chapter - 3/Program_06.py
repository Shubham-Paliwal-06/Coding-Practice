# Author: Shubham Paliwal

# 5% bonus to male employees
# 10% bonus to female employees
# If salary of employee is less than 10000 then he/she gets an extra 2% bonus on salary
# Calculate the bonus and the total amount of money to be given
gender = input("Enter the gender of Employee: ")
salary = float(input("Enter the salary of the Employee: "))
gender = gender.lower()
if (salary < 10000):
    if (gender == "male" or gender == "m"):
        bonus = 0.07 * salary
    elif (gender == "female" or gender == "f"):
        bonus = 0.12 * salary
else:
    if (gender == "male" or gender == "m"):
        bonus = 0.05 * salary
    elif (gender == "female" or gender == "f"):
        bonus = 0.10 * salary
amount = bonus + salary

print(f"The bonus given to the Employee is: {bonus}\nThe total amount includig bonus is: {amount}")