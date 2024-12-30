# Author: Shubham Paliwal

# Write a program to convert degrees Fahrenheit to degrees Celsius
tempF = float(input("Enter the temperature in degrees Fahrenheit: "))

tempC = (5/9) * (tempF - 32)
print(f"The temperature in degrees Celsius is:", "%.2f"%tempC)