#!/usr/bin/python3

'''A function that calculates the perimeter of an island'''


def island_perimeter(grid):
    '''Returns the perimeter of the island'''
    if type(grid) is list and type(grid[0]) is list:
        perimeter = 0
        for row in range(len(grid)):
            for col in range(len(grid[row])):
                if grid[row][col] == 1:
                    perimeter = perimeter + check_sides(row, col, grid)
        return perimeter


def check_sides(row, col, grid):
    '''check the surrounding of a land in the grid'''
    perimeter = 0
    # check left
    if grid[row][col - 1] == 0:
        perimeter = perimeter + 1
    # check up
    if grid[row - 1][col] == 0:
        perimeter = perimeter + 1
    # check right
    if grid[row][col + 1] == 0:
        perimeter = perimeter + 1
    # check down
    if grid[row + 1][col] == 0:
        perimeter = perimeter + 1

    return perimeter
