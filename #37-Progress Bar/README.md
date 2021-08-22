`Challenge Number`: #37

`Programming language used` Python

`Prompt`:

Re - create a loading bar in terminal, by myself.

`Learning Objective(s)`:

I used to see loading bars while downloading packages from `Terminal`. So, I thought why not building one, so I can understand for myself.

*"What I cannot create, I do not understand" (Richard Feynman)*

`How did I solve the problem`:

The key insight to this challenge was to learn about the *carriage return* character `\r`.

*For each* iteration:

1. I compute the current percentage. 

2. Determine how many "filling" characters needed to represent the current iteration 

3. Generate a `String` that, once printed, will represent the loading bar

4. The previously generated `String` is followed by a carrage return character `\n` that repositions the cursor back to its initial position.

*The same process is repeated until the "total" number of iteration is reached*

`Result`:

```
Progress: [###-------] 30% Complete
```

`Useful Resources`

*Note: The following resources helped me wrap my head around*

- https://stackoverflow.com/questions/3173320/text-progress-bar-in-the-console/34325723#34325723

- https://stackoverflow.com/questions/1337529/how-to-update-a-printed-message-in-terminal-without-reprinting

- https://stackoverflow.com/questions/3091524/what-are-carriage-return-linefeed-and-form-feed