# Author: Shubham Paliwal

'''
    Write a program to print he following patterns:-
(a) *
    **
    ***
    ****
    *****
(b) 1
    12
    123
    1234
    12345
(c) 1
    22
    333
    4444
    55555
(d) 0
    12
    345
    6789
(e)         1
          1 2 1
        1 2 3 2 1
      1 2 3 4 3 2 1
    1 2 3 4 5 4 3 2 1
(f)     1
       2 2
      3 3 3
     4 4 4 4
    5 5 5 5 5
'''

# (a)
n = int(input("Enter the number of lines:"))
for i in range(1, n+1):
    for j in range(i):
        print("*", end = "")
    print()


# (b)
n = int(input("Enter the number of lines:"))
for i in range(1, n+1):
    for j in range (1, i+1):
        print(f"{j}", end = "")
    print()


# (c)
n = int(input("Enter the number of lines:"))
for i in range(1, n+1):
    for j in range (1, i+1):
        print(f"{i}", end = "")
    print()


# (d)
n = int(input("Enter the number of lines:"))
count = 0
for i in range(1, n+1):
    for j in range(i):
        print(f"{count}", end= "")
        count += 1
    print()


# (e)
n = int(input("Enter the number of lines:"))
for i in range(1, n+1):
    for k in range(n, i, -1):
        print(" ", end = " ")
    for j in range (1, i+1):
        print(j, end = " ")
    for l in range(i-1, 0, -1):
        print(l, end = " ")
    print()


# (f)
n = int(input("Enter the number of lines:"))
for i in range(1, n+1):
    for k in range(n, i, -1):
        print("", end = " ")
    for j in range(1, i+1):
        print(i, end = " ")
    print()     