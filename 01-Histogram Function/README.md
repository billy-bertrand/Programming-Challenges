`Programming language used`: Java

`Prompt`:

Write a static method `histogram()` that takes an array `a[]` of `int` values and an integer `m` as arguments and returns an array of length `m` whose `ith` entry is the number of times the integer `i` appeared in the argument array.

*Note: if the value in `a[]` are all between `0` and `m-1`, the sum of the values in the returned array should be equal to `a.length`*

`Learning Objectives`:

- For fun 😜👻

`How did I solve the problem`:

Arrays, once created, are filled by `0s` by default. So, I iterate through the "argument" array and consider its values to be "indices" in the final array, and increment the values at those same indices. If I come across **values **`1` `2`, and `4` in the "argument" array for instance, I increment the values at **indices **`1` `2`, and `4` in the "final" array