# Write a program to calculate distance beteen two points in 3D space
x1, y1, z1 = [int(x) for x in input("Enter the coordinates of point 1: ").split(",")]
x2, y2, z2 = [int(x) for x in input("Enter the coordinates of point 2: ").split(",")]

distance = ((x2-x1)**2 + (y2-y1)**2 + (z2-z1)**2)**0.5
print(f"The distance between point 1 and point 2 is: {distance}")