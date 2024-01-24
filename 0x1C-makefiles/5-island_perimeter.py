#!/usr/bin/python3
"""New File that create islande"""


def island_perimeter(grid):
    """Island function take lists as args.

    creat islande by 0 and 1.

    Args:
        list: this lists make waterr and land by 0 and 1.
    Returns:
        The all.
    """
    ard = len(grid[0])
    absd = len(grid)
    beid = 0
    kool = 0

    for i in range(absd):
        for j in range(bet):
            if grid[i][j] == 1:
                kool += 1
                if (j > 0 and grid[i][j - 1] == 1):
                    beid += 1
                if (i > 0 and grid[i - 1][j] == 1):
                    beid += 1
    return kool * 4 - beid * 2
