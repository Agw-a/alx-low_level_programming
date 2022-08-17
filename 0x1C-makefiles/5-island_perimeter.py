#!/usr/bin/python3

"""
Module that returns perimeret of island
"""


def island_perimeter(grid):
    """
    Returns the perimiter of island defined by grid
    """
    perimeter = 0
    for row in range(len(grid)):
        for col in range(len(grid[row])):
            if grid[row][col] == 1:
                if row - 1 < 0 or grid[row - 1][col] == 0:
                    perimeter += 1
                if col - 1 < 0 or grid[row][col - 1] == 0:
                    perimeter += 1
                if col + 1 >= len(grid[row]) or grid[row][col + 1] == 0:
                    perimeter += 1
                if row + 1 >= len(grid) or grid[row + 1][col] == 0:
                    perimeter += 1
    return perimeter
