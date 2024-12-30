# Author: Shubham Paliwal

# Write a program to read the numbers enterd by the user until -1 is encountered. Also count the negatives, positives and zeroes entered by the user
number = []
i = int(input("Enter any number: "))
positive, negative, zero = 0, 0, 0
while (i!=-1):
    while (i < 0):
        number.insert(0, i)
        negative += 1
        i = int(input("Enter any number: "))
        break
    while (i > 0):
        number.insert(0, i)
        positive += 1
        i = int(input("Enter any number: "))
        break
    while (i == 0):
        number.insert(0, i)
        zero += 1
        i = int(input("Enter any number: "))
        break

print(number)
print(f"Positive numbers are: {positive}")
print(f"Zeroes are: {zero}")
print(f"Negative numbers are: {negative}")




# Find the average of positive numbers and negative numbers
positive_sum, negative_sum = 0, 0
for i in range(len(number)):
    if (number[i] < 0):
        negative_sum += number[i]
    elif (number[i] > 0):
        positive_sum += number[i]
    else:
        break
avg_positive = float(positive_sum)/(positive)
avg_negative = float(negative_sum)/(negative)
print(f"The average of negative numbers is: {avg_negative}\nThe verage of positive numbers is: {avg_positive}")