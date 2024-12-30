# Author: Shubham Paliwal

# Write a program to calculate the sum and average of first 10 natural numbers
i = 1
sum = 0
while (i<11):
    sum += i
    i += 1
average = float(sum)/(i-1)
print(f"The sum of first ten natural numbers is: {sum}\nThe average of first ten natural numbers is: {average}")



# Write a program to calculate sum and average of numbers from m to n
m, n = int(input("Enter the starting number: ")), int(input("Enter the ending number: "))
i = m
sum = 0
while (i in range(m, n)):
    sum += i
    i += 1
average = float(sum)/(n-m)
print(f"The sum of numbers from m to n is: {sum}\nThe average of numbers from m to n is: {average}")