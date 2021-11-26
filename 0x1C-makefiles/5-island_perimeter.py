#!/usr/bin/python3
'''Returns the perimeter of the island described in grid'''

def island_perimeter(grid):
    ''' Documentation
        grid is a list of list of integers:
            0 represents a water zone
            1 represents a land zone
            One cell is a square with side length 1
            Grid cells are connected horizontally/vertically (not diagonally).
            Grid is rectangular, width and height don’t exceed 100
            len(grid) = length of grid row
            len(grid[x]) = length of grid column
    '''
    size = 0
    sides = 0
    for x in range(len(grid)):
        for y in range(len(grid[x])):
            if grid[x][y] == 1:
                size += 1
                if x != 0 and grid[x - 1][y] == 1:
                    sides += 1
                if y != 0 and grid[x][y - 1] == 1:
                    sides += 1

    perimeter = 4 * size - 2 * sides
     
    return perimeter