# Problem statement

We have a two-dimensional board game involving snakes.
The board has two types of squares on it: +’s represent
impassable squares where snakes cannot go, and 0’s
represent squares through which snakes can move.

Snakes may move in any of four directions - up, down
left, or right - one square at a time, but they will
never return to a square that they’ve already visited.
If a snake enters the board on an edge square, we want
to catch it at a different exit square on the board’s
edge.

The snake is familiar with the board and will take the
route to the nearest reachable exit, in terms of the
number of squares it has to move through to get there.
Write a function that takes a rectangular board with
only +’s and 0’s, along with a starting point on the
edge of the board (given row first, then column), and
returns the coordinates of the nearest exit to which it
can travel.

If multiple exits are equally close, give the one with
the lowest numerical value for the row. If there is
still a tie, give the one of those with the lowest
numerical value for the column.

If there is no answer, output -1 -1

The board will be non-empty and rectangular. All values
in the board will be either + or 0. All coordinate
(input and output) are zero-based. All start positions
will be 0, and be on the edge of the board. For example,
(0,0) would be the top left corner of any size input.

# Example Input

Consider the following board:

```
  +  +  +  +  +  +  +  0  0
  +  +  0  0  0  0  0  +  +
  0  0  0  0  0  +  +  0  +
  +  +  0  +  +  +  +  0  0
  +  +  0  0  0  0  0  0  +
  +  +  0  +  +  0  +  0  +
```

If a snake starts at the edge on the left (row 2 column 0), the snake will take the following path to another edge square (an exit)

```
         +  +  +  +  +  +  +  0  0
         +  +  0  0  0  0  0  +  +
start ->[0][0][0] 0  0  +  +  0  +
         +  + [0] +  +  +  +  0  0
         +  + [0] 0  0  0  0  0  +
         +  + [0] +  +  0  +  0  +
          end  ^
```

If the snake starts where the last one ended (row 5 column 2), the snake has two paths of length 5:

```
  +  +  +  +  +  +  +  0  0
  +  +  0  0  0  0  0  +  +
 [0][0][0] 0  0  +  +  0  +
  +  + [0] +  +  +  +  0  0
  +  + [0] 0  0  0  0  0  +
  +  + [0] +  +  0  +  0  +

  +  +  +  +  +  +  +  0  0
  +  +  0  0  0  0  0  +  +
  0  0  0  0  0  +  +  0  +
  +  +  0  +  +  +  +  0  0
  +  + [0][0][0][0] 0  0  +
  +  + [0] +  + [0] +  0  +
```

For possible exits of (2, 0) and (5, 5). Since these are the same length, we take the one with the lowest row value first, and we return (2, 0). If the row value were the same, we’d take the one with the lowest column value

# Learning Objective(s)

- Practice recursion and backtracking

# How did I solve the problem

The core of my solution is the `solve` function. Solve _recursively_ visits adjacent cells,
and mark them as "visited". It keeps track of visited cells using `solMatrix`. The function
returns (i.e. backtracks) when trying to visit an 'out-of-bound' cell, an unsafe cell, or
an already visited cell.
