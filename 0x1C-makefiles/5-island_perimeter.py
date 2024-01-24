#!/usr/bin/python3
""" module comment """

def island_perimeter(grid):
    """ return perimeter of one's in a matrix """
width = len(grid[0])
height = len(grid)
count = 0
size = 0

for i in range(height):
for j in range(width):
if grid[i][j] == 1:
size += 1
if (j > 0 and grid[i][j - 1] == 1):
count += 1
if (i > 0 and grid[i - 1][j] == 1):
count += 1
return size * 4 - count * 2

