# Author: Shubham Paliwal

# Write a program to calculate pow(x,n)
x, n = [int(x) for x in input("Enter the number and power: ").split()]
pow = 1
for i in range(1, n+1):
    pow = pow * x
print(f"The pow({x}, {n}) is: {pow}")