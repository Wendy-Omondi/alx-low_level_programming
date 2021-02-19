#!/usr/bin/python3
"""defines island perimeter program"""


def island_perimeter(grid):
    """Returns the perimeter from a described grid"""
    if len(grid) == 0 or len(grid[0]) == 0:
        return 0

    rows_length = len(grid)
    column_length = len(grid[0])
    rows = set()
    column = set()

    for row in range(rows_length):
        for col in range(column_length):
            if grid[row][col] == 1:
                rows.add(row)
                column.add(col)

    result = (len(rows) * 2) + (len(column) * 2)
    return result
