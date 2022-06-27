`Programming language used`: C

`Prompt`: 

Write function `max` that returns the highest value it has been called with so far.

`Learning Objective(s)`:

- Practice using `static` variables.

`How did I solve the problem`:

I start by creating `maxValue`, a `static` variable, and set its value to `0`.

Each time `max` is called:

1. The passed argument gets compared with the current value of `maxValue`.

2. `maxValue` gets updated only if the passed argument is *greater* than the current value of `maxValue`.

3. `maxValue` is returned.

`Useful Resources`:

N/A