# Write a program to calculate the area of triangle using Heron's Formula
a, b, c = int(input("Enter the side 1: ")), int(input("Enter the side 2: ")), int(input("Enter the side 3: "))
s = (a+b+c)/2
areaTriangle = (s*(s-a)*(s-b)*(s-c))**0.5
print(f"The area of triangle using Heron's Formula is: {areaTriangle}")