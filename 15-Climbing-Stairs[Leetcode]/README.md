# Problem Statement

You are climbing a staircase. It takes n steps to reach the top.

Each time you can either climb 1 or 2 steps. In how many distinct ways can you climb to the top?

# Example Input

## Example 1

```
Input: n = 2
Output: 2
Explanation: There are two ways to climb to the top.
1. 1 step + 1 step
2. 2 steps
```

## Example 2

```
Input: n = 3
Output: 3
Explanation: There are three ways to climb to the top.
1. 1 step + 1 step + 1 step
2. 1 step + 2 steps
3. 2 steps + 1 step
```

# Constraints

- `1 <= n <= 45`

# Learning Objectives

- Practice Recursion and Backtracking
- Practice Dynamic Programming

# How did I solve the problem

I came up with two solutions a naive approach, and a better one

- `climbstairs` was my naive solution. It used recursion and backtracking
  to find the number of ways to climb to the top. I used recursion and
  backtracking because I used the same techniques to solve challenge 14.
  Even though the this approach returns the correct output, it does _not_
  scale well. It has exponential complexity.

- `climbstairs_Optimized` on the other hand, used _Dynamic Programming_. I
  On their webpage, GeeksforGeeks defines "Dynamic Programming" as an
  optimzation over plain recursion. I also saw the example for the Fibonacci
  sequence 🤔. So, I started looking for some trends in the output returned
  by the `climbStairs` function. I found one. I considered the following 12
  outputs:

  ```
  n = 1 -> 1

  n = 2 -> 2

  n = 3 -> 3

  n = 4 -> 5

  n = 5 -> 8

  n = 6 -> 13

  n = 7 -> 21

  n = 8 -> 34

  n = 9 -> 55

  n = 10 -> 89

  n = 11 -> 144

  n = 12 -> 233
  ```

  I noticed that the output of numbers to come, could be computed
  using already computed number. And not compute everything from
  scratch everytime. To compute n = 12 for instance, I noticed that:

  ```
  climbStairs(12) = climbStairs(11) + climbStairs(10)
  ```

  To generalize:

  ```
  For n >= 3
  ClimbStairs(n) = climbStairs(n - 1) + climbStairs(n - 2)
  ```

  So, we store the result of previous computations, we dramatically
  reduce the computation time, compared to the naive method
