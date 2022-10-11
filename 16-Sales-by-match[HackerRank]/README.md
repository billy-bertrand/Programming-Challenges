# Problem statement

There is a large pile of socks that must be paired by color. Given an array of integers representing the color of each sock, determine how many pairs of socks with matching colors there are.

# Example

```
n = 7

ar = [1, 2, 1, 2, 1, 3, 2]
```

There are one pair of color `1` and one of color `2`.
There are three odd socks left, one of each color. The
number of pairs is `2`.

# Function Description

Complete the sockMerchant function in the editor below.

sockMerchant has the following parameter(s):

- int `n`: The number of socks in the pile
- int `ar[n]`: The colors of each sock

# Returns

- int: the number of pairs

# Input format

Write a function `sockMerchant` that accepts:

- n: Number of socks represented in `arr`
- arr: Array of numbers where arr[i] is the color of the
`ith` sock in the pile.

# Constraints

- `1 <= n <= 100`
- `1 <= ar[i] <=100` where `0 <= i < n`

# Sample Output

```
STDIN                       Function
-----                       --------
9                           n = 9
10 20 20 10 10 30 50 10 20  ar = [10, 20, 20, 10, 10, 30, 50, 10, 20]
```

# Sample Ouput

```
3
```

# Explanation

![illustration](./img/illustration-1.png)

There are three pairs of socks.

# Learning Objectives

- Warm up challenge offered by HackerRank