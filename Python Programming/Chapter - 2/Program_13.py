# Author: Shubham Paliwal

# Write a program to find whether a givrn number is Armstrong number or not
num = int(input("Enter the number: "))
num_len = len(str(num))
temp = num
armstrong = 0
remainder = 0
for i in range(1, num_len + 1):
    remainder = temp % 10
    temp = temp // 10
    armstrong = armstrong + (remainder**num_len)
if (num == armstrong):
    print(f"{num} is an armstrong number")
else:
    print(f"{num} is not an armstrong number")