`Programming language used`: Python

`Prompt`: 

A car manufacturer has data about the  production processes of `N` different cars (numbered from `0` to `N-1`) and wants to maximize the number of cars produced in the upcoming month. The manufacturing information is describe by an array `H`, where `H[K]` denotes the number of hours required to to produce the `K-th` car.

There are two assembly lines in the factory, the first of which works for `X`, and the second `Y`, hours in a month. Every car can be constructed using either one of these lines. Only car at a time can be produced on each assembly line and it is not possible to switch lines after starting the car's production.

*What is the maximum number of different cars that can be produced in the upcoming month?*

Write a function:

`solution(H, X, Y)`

that, given an array `H` of `N` integers and two integers `X` and `Y`, returns the maximum number of different cars that can be produced in the upcoming month by assigning cars to assembly lines in an optimal way.

Examples:

1. Given `H = [1, 1, 3]`, `X = 1` and `Y = 1`, the answer should be `2`. Only cars whose assembly time require 1 hour can be constructed

2. Given `H = [6, 5, 5, 4, 3]`, `X = 8` and `Y = 9`, the answer should be `4`. The cars that need `3` hours and `5` hours can be produced on the first assembly line while the second car that needs `5` hours and the car that needs `4` hours can be produced using the second line.

3. Given `H = [6, 5, 2, 1, 8]`, `X = 17` and `Y = 5`, the answer should be `5`. The car that need `3` and `5` hours can be produced on the second assembly line and the four other cars can be produced on the first line.

4. Given `H = [5, 5, 4, 6]`, `X = 8`, `Y = 8`, the answer should be `2`. Only one car can be produced on each line.

*Notice that the examples above can have many possible assignements of cars to the assembly lines.*

`Learned Objectives`:

- Potential coding interview questions.
- Just for fun 😎.

`How did I solve the problem`:

1. I generate all possible ways of arranging element in list `H` using recursion, and backtracking.

2. For EACH possible arrangement: a) I assign the cars to either assembly lines, depending on availibility. b) I store the number of car produced in a variable. c) I make sure the keep the highest nb of car produced as I iterate through the list.

3. By the end of step 2, the variable holding the number of cars produced has the highest value. I just *return* it. 🤠

`Useful Resources`:

- https://www.geeksforgeeks.org/write-a-c-program-to-print-all-permutations-of-a-given-string/
