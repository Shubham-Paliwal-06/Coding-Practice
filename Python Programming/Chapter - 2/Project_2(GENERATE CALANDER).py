# Author: Shubham Paliwal

# Project Name:- GENERATING CALANDER OF GIVEN YEAR

print("*" * 15, "CALENDAR", "*" * 15)
year = int(input("Enter the year: "))

def leap(year):
    if (year % 400 == 0):
        is_leap = 1
    elif (year % 100 == 0):
        is_leap = 0
    elif (year % 4 == 0):
        is_leap = 1
    else:
        is_leap = 0
    return is_leap

def day_of_week(day, month, year):
    q = day
    m = month
    k = year % 100
    j = year // 100
    h = (q + (((13*m) - 1)//5) + k + (k//4) + (j//4) +(5*j)) %7
    return h

mm_name = ["JANUARY", "FEBRUARY", "MARCH", "APRIL", "MAY", "JUNE", "JULY", "AUGUST", "SEPTEMBER", "OCTOBER", "NOVEMBER", "DECEMBER"]
leap_year = leap(year)

for i in range(11, 13):
    print("_"*20, mm_name[i-11], year, "_"*20)
    first = day_of_week(1, i, year-1)
    print("Su\tMo\tTu\tWe\tTh\tFr\tSa")
    for z in range(first):
        print("\t", end = "")
    if (i-11 == 0):
        for j in range(1, 32):
            print(f"{j}\t", end = "")
            if ((j + first) % 7 == 0):
                print()
        print("\n")
    if (i-11 == 1):
        if (leap_year == 1):
            for j in range(1, 30):
                print(f"{j}\t", end = "")
                if ((j + first) % 7 == 0):
                    print()
            print("\n")
        else:
            for j in range(1, 29):
                print(f"{j}\t", end = "")
                if ((j + first) % 7 == 0):
                    print()
            print("\n")
for i in range(1,11):
    print("_"*20, mm_name[i+1], year, "_"*20)
    first = day_of_week(1, i, year)
    print("Su\tMo\tTu\tWe\tTh\tFr\tSa")
    for z in range(first):
        print("\t", end = "")
    if (i+1 == 3 or i+1 == 5 or i+1 == 8 or i+1 == 10):
        for j in range(1, 31):
            print(f"{j}\t", end = "")
            if ((j + first) % 7 == 0):
                print()
        print("\n")
    elif (i+1 == 2 or i+1 == 4 or i+1 == 6 or i+1 == 7 or i+1 == 9 or i+1 == 11):
        for j in range(1, 32):
            print(f"{j}\t", end = "")
            if ((j + first) % 7 == 0):
                print()
        print("\n")



# AlternATE Method
import calendar
print("*" * 20, "CALENDAR", "*" *20)
cal = calendar.TextCalendar(calendar.SUNDAY)
# An instance of TextCalendar class is created and calendar.SUNDAy means that you want to start displaying the calendar from Sunday
i = 1
while (i<=12):
    cal.prmonth(year, i)
    i += 1
# prmonth() is a function of the class that prints the calendar for given year and month