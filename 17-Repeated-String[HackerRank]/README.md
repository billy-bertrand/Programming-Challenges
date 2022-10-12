# Problem Statement

There is a string, `s` , of lowercase English letters that is repeated infinitely many times. Given an integer, `n` , find and print the number of letter a's in the first `n` letters of the infinite string.

# Example

```
s = 'abcac'

n = 10
```

The substring we consider is `abcacabcac`, the first `10` characters of the infinite string. There are `4` occurrences of a in the substring.

# Function Description

Complete the repeatedString function in the editor below.

repeatedString has the following parameter(s):

- `s`: a string to repeat
- `n`: the number of characters to consider

# Returns

- int: the frequency of `a` in the substring

# Constraints

- `1 <= |s| <= 100`
- `1 <= n <= 10^12`
- For 25% of the case, `n <= 10^6`

# Sample Input

## Example #1

Sample input

```
aba
10
```

Sample output

```
7
```

The first `n = 10` letters of the infinite string are `abaabaabaa`. Because there are 7 a's, we return `7`.

## Example #2

Sample Input

```
a
1000000000000
```

Sample Output

```
1000000000000
```

Because all of the `n = 1000000000000` letters fof the infinite string are `a`, we return `1000000000000`.

# Learning Objectives

- Warm up challenge offered by HackerRank
