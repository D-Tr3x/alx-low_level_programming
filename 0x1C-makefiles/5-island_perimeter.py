#!/usr/bin/python3
""" Defines a function for returning the perimeter of an island """

def island_perimeter(grid):
    """ Returns the perimeter of the island described in `grid`

    Args:
        grid (list of list of integers), representing an island  with:
        0 - representing water zone
        1 - representing land zone
    """

    height = len(grid)
    width = len(grid[0])
    perimeter = 0

    for i in range(height):
        for j in range(width):
            if grid[i][j] == 1:
                if i == 0 or grid[i - 1][j] == 0:
                    perimeter += 1
                if i == height - 1 or grid[i + 1][j] == 0:
                    perimeter += 1
                if j == 0 or grid[i][j - 1] == 0:
                    perimeter += 1
                if j == width - 1 or grid[i][j + 1] == 0:
                    perimeter += 1

    return perimeter
