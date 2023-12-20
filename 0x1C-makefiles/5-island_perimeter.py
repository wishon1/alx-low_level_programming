#!/usr/bin/python3
"""
Defines an island perimeter measuring function.
"""


def island_perimeter(grid):
    """
    Return the perimeter of an island.

    The grid represents water by 0 and land by 1.

    Args:
        grid (list): A list of list of integers representing an island.
    Returns:
        The perimeter of the island defined in grid.
    """
    perimeter = 0
    rows = len(grid)
    cols = len(grid[0])

    for i in range(rows):
        for j in range(cols):

            if grid[i][j] == 1:
                # Each land square contributes 4 to perimeter
                perimeter += 4

                # Check adjacent land squares (up and left) and
                # +deduct accordingly
                if i > 0 and grid[i - 1][j] == 1:
                    # Deduct 2 for adjacent land above
                    perimeter -= 2

                if j > 0 and grid[i][j - 1] == 1:
                    # Deduct 2 for adjacent land on the left
                    perimeter -= 2

    return perimeter
