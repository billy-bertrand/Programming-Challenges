def solveMaze(board, row, col):
    # 1- Let's save starting position of the snake
    sn_row = row
    sn_col = col

    # 2- Compute the dimensions of the board
    NUMBER_ROWS = len(board)
    NUMBER_COLS = len(board[0])

    # 3- potential exits
    exits = []

    # 4- A matrix representing discovered paths to exits
    solMatrix = [[0] * NUMBER_COLS for _ in range(NUMBER_ROWS)]

    # 5- Define 'solve'. This function uses backtracking to find all potential exits recursively in the board
    def solve(row, col):
        # potential exit (but not entry position) is reached
        if (row == 0 or col == 0 or row == NUMBER_ROWS - 1 or col == NUMBER_COLS - 1) and board[row][col] == '0' and (row != sn_row or col != sn_col):
            solMatrix[row][col] = 1
            exits.append(tuple((row, col)))

        # When navigating inside the maze
        if row >= 0 and col >= 0 and row < NUMBER_ROWS and col < NUMBER_COLS and board[row][col] == '0' and solMatrix[row][col] == 0:
            # visit the cell
            solMatrix[row][col] = 1

            # Recursively Visit adjacent cells
            # top
            solve(row - 1, col)

            # right
            solve(row, col + 1)

            # left
            solve(row, col - 1)

            # down
            solve(row + 1, col)

        # When accessing out of bound position, unsafe cell, or already visited cells in solMatrix
        else:
            return 0
    # end definition

    # solve the maze. At this point, "exits" has a list of all possible exits
    solve(row, col)

    # print the closest exit
    if len(exits) == 0:
        return tuple((-1, -1))
    else:
        result = exits[0]
        for exit in exits:
            # if exit is closer to start position
            if exit[0] < result[0]:
                result = exit
            elif exit[1] < result[1]:
                result = exit

        return result


if __name__ == '__main__':
    board = [
        ['+', '+', '+', '+', '+', '+', '+', '0', '0'],
        ['+', '+', '0', '0', '0', '0', '0', '+', '+'],
        ['0', '0', '0', '0', '0', '+', '+', '0', '+'],
        ['+', '+', '0', '+', '+', '+', '+', '0', '0'],
        ['+', '+', '0', '0', '0', '0', '0', '0', '+'],
        ['+', '+', '0', '+', '+', '0', '+', '0', '+']
    ]

    print("Enter the snake's starting position")
    start_row = int(input("Row No: "))
    start_col = int(input("Col No: "))

    print(solveMaze(board, start_row, start_col))
