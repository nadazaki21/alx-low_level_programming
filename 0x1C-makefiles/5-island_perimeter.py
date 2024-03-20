#!/usr/bin/python3
""" module that calculates the parameter of an
insland that is represented a s a grid """


def island_perimeter(grid):
    """function tha takes the grid (island)
    as a paarameter and returns its perimeter"""
    """ 0 represents a water zone """
    """ 1 represents a land zone """
    """ One cell is a square with side length 1 """
    """Grid cells are connected horizontally/vertically
    (not diagonally)."""
    """ Grid is rectangular, width and height don’t
    exceed 100 """

    valid_sides = 0

    for row_num in range(len(grid)):
        for i in range(len(grid[row_num])):
            if grid[row_num][i] == 1:
                # checking right and left
                if i == 0 or i == (len(grid[row_num]) - 1):
                    valid_sides += 1
                    if i == 0:
                        if grid[row_num][i + 1] != 1:
                            valid_sides += 1
                    elif i == (len(grid[row_num]) - 1):
                        if grid[row_num][i - 1] != 1:
                            valid_sides += 1
                else:
                    if grid[row_num][i - 1] != 1:
                        valid_sides += 1
                    if grid[row_num][i + 1] != 1:
                        valid_sides += 1

                # checking up and down

                if row_num == 0 or row_num == (len(grid) - 1):
                    valid_sides += 1
                    if row_num == 0:
                        if grid[row_num + 1][i] != 1:
                            valid_sides += 1
                    if row_num == (len(grid) - 1):
                        if grid[row_num - 1][i] != 1:
                            valid_sides += 1
                else:
                    if grid[row_num + 1][i] != 1:
                        valid_sides += 1
                    if grid[row_num - 1][i] != 1:
                        valid_sides += 1
    return valid_sides
