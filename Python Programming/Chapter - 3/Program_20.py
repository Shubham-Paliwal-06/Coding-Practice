# Author: Shubham Paliwal

# Write a program to classify the number entered by the user as prime or composite number
n = int(input("Enter the number: "))
is_prime = 2
if (n==0 or n==1):
    print(f"{n} is a composite number")
for i in range(2, n + 1):
    if (n==2):
        print(f"{n} is a prime number")
        break
    elif (n % i == 0):
        is_prime = 0
        break
    else:
        is_prime = 1
if (is_prime == 0):
    print(f"{n} is a composite number")
elif (is_prime == 1):
    print(f"{n} is a prime number")


# alternate code
is_composite = 0
for i in range(2, n):
    if (n % i == 0):
        is_composite = 1
        break
if (is_composite == 1):
    print(f"{n} is a composite number")
else:

    print(f"{n} is a prime number")