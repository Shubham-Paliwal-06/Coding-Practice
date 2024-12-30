# Author: Shubham Paliwal

# Write a program to sum the following series:-
# (a)  1 + 1/2 + 1/3 + ....... + 1/n
# (b)  1 + 1/2*2 + 1/3*3 + 1/4*4 + ........ + 1/n*n
# (c)  1/2 + 2/3 + 3/4 + ........ + n/(n+1)
# (d)  1 + 2*2/2 + 3*3*3/3 + ........ + n**n/n

n = int(input("Enter the number of terms: "))
# (a)
sum_a = 0
for i in range(1, n+1):
    sum_a = sum_a + (1/i)
print(f"The sum of series 1 + 1/2 + 1/3 + ....... + 1/{n} is: {sum_a}")


# (b)
sum_b = 0
for i in range(1, n+1):
    sum_b = sum_b + (1/(i*i))
print(f"The sum of series 1 + 1/2*2 + 1/3*3 + ........ + 1/{n}*{n} is: {sum_b}")


# (c)
sum_c = 0
for i in range(1, n+1):
    sum_c = sum_c + (i/(i+1))
print(f"The sum of series 1/2 + 2/3 + 3/4 + ........ + {n}/({n}+1) is: {sum_c}")


# (d)
sum_d = 0
for i in range(1, n+1):
    sum_d = sum_d + ((i**i)/i)
print(f"The sum of series 1 + 2*2/2 + 3*3*3/3 + ........ + ({n}**{n})/{n} is: {sum_d}")



# Write a program to calculate the sum of cubes of numbers from 1 to n
sum_cube = 0
for i in range(1, n+1):
    sum_cube = sum_cube + (i**3)
print(f"The sum of cubes of numbers from 1 to {n} is: {sum_cube}")


# Write a program to calculate the sum of squares of even numbers in range 1 to n
sum_square = 0
for i in range(1, n+1):
    if (i % 2 == 0):
        sum_square = sum_square + (i**2)
print(f"The sum of squares of numbers from 1 to {n} is: {sum_square}")