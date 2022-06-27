`Programming language used`: C

`Prompt`:

Write a function called `newbie` that returns `1` when called for *first time*, and returns `0` if it is called again in the future. 

`Learning Objective(s)`:

- Practice using `static` variable

`How did I solve the problem`:

1. When `newbie` is called for the first time, `static` variable, `counter`, is initialized to `0`.

2. `newbie` returns `1` only if `counter` is `1`.

*Note: `static` variables, when initialized, remain in memory*

`Useful Resources`:

N/A