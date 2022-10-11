#GOAL: Return the coordinate of the nearest exit

from genericpath import exists


def solveMaze(board, row, col):
    #Let's save starting position of the snake
    sn_row = row
    sn_col = col

    #Compute the dimensions of the board
    NUMBER_ROWS = len(board)
    NUMBER_COLS = len(board[0])

    #potential exits
    exits = []

    #A matrix representing discovered paths to exits
    solMatrix = [[0] * NUMBER_COLS for _ in range(NUMBER_ROWS)]

    #'solve' will use backtracking to find all potential exits recursively 
    def solve(row, col):
        #potential exit (but not entry position) is reached
        if (row == NUMBER_ROWS - 1 or col == NUMBER_COLS - 1) and (row != sn_row and col != sn_col):
            solMatrix[row][col] = 1
            exits.append(tuple((row, col)))
            return True
        #When navigating inside the maze
        if row >= 0 and col >= 0 and row < NUMBER_ROWS and col < NUMBER_COLS and board[row][col] == '0' and solMatrix[row][col] == 0:
            #visit the cell
            solMatrix[row][col] = 1
            exits.append(tuple((row, col)))

            #try to visit adjacent positions
            #right
            #top
            #left
            #down
        #When ccessing out of bound position, unsafe cell, or already visited cell in solMatrix
        else:
            return 0
    #end definition

    if solve(row, col):
        if len(exits) == 1:
            return exits[0]
        else:
            #find closest exits
            pass
    else:
        #No exits were found
        return tuple((-1, -1))

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
    start_row = int(input("Row No"))
    start_col = int(input("Col No"))

    print(solveMaze(board, start_row, start_col))