#!/usr/bin/python3
"""Defines an island perimeter measuring function."""


def island_perimeter(grid):
    """Return the perimiter of an island.

    The grid represents water by 0 and land by 1.

    Args:
        grid (list): A list of list of integers representing an island.
    Returns:
        The perimeter of the island defined in grid.
    """
 cnt = 0
    height = len(grid)
    width = len(grid[0])
    for i in range(height):
        for j in range(width):
            if grid[i][j] == 0:
                if i > 0 and grid[i - 1][j] == 1:
                        cnt += 1
                if j > 0 and grid[i][j - 1] == 1:
                        cnt += 1
                if j < width - 1 and grid[i][j + 1] == 1:
                        cnt += 1
                if i < height - 1 and grid[i + 1][j] == 1:
                        cnt += 1
    return cnt
