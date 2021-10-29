`Challenge Number`: #40

`Programming language used`: C++

`Prompt`:

Suppose you have the following "Node" class:

```cpp
class Node{
public:
    Node * next;
    int value;
};
```

We can use the concept of the "next" data member to create a list of nodes. For example:

```cpp
Node * nodeA = new Node;
Node * nodeB = new Node;
nodeA->value = 0;
nodeB->value = 1;
nodeA->next = nodeB;
nodeB->next = nullptr;
```

This code will create a list structure that (conceptually) looks something like the following:

```
+---+         +---+
| 0 |   -->   | 1 |   -->   nullptr
+---+         +---+
```

Once you have a list of nodes, you can iterate through them and print the contents with code like following:

```cpp
int i = 0;
Node * current = nodeA;
while(current != nullptr){
    cout << "Node " << i << " has value " << current->value << endl;
    current = current->next;
    i++;
}
```

This code creates a "current" pointer and steps forward until it reaches the end of the list (nullptr).

Each iteration of the while loop takes a step with current = current->next;

Conceptually, this looks something like the following:

```
********************
* First iteration: *
********************

current
  |
  V
+---+         +---+
| 0 |   -->   | 1 |   -->   nullptr
+---+         +---+

*********************
* Second iteration: *
*********************

              current
                |
                V
+---+         +---+
| 0 |   -->   | 1 |   -->   nullptr
+---+         +---+

***************************************
* We hit nullptr so we exit the loop: *
***************************************

                             current
                               |
                               V
+---+         +---+
| 0 |   -->   | 1 |   -->   nullptr
+---+         +---+
```

For your benefit, we have provided you with a Printer class which performs the sequence above in a Print function which accepts a pointer that designated the start of the list. The print function will also print a secret hash code that guarantees you have actually called it.

```cpp
class Printer{
public:
    void Print(Node * start){
        int i = 0;
        Node * current = start;
        while(current != nullptr){
            cout << "Node " << i << " has value " << current->value << endl;
            current = current->next;
            i++;
        }

        //// hash generating code has been hidden from the student ////

        cout << "Secret Hash: " << hash << endl;
    }
};
```
Your task in this lab is to accept a number from the keyboard, and then build a list of nodes that matches the given size. Then feed the starting node into the Printer::Print function.

- You may assume the user enters a positive value (greater than 0)

Thus, if the user enters 4, then the output will be:

```
Node 0 has value 0
Node 1 has value 1
Node 2 has value 2
Node 3 has value 3
Secret Hash: 9369380
```

`Learning Objective(s)`:

- This lab activity was meant to help me Practice using pointers. I enjoyed it.

`How did I solve the problem`:

I used a `for` loop.
In that loop, I:

1. Create a new node object, `currNode`.
2. Set its value to the current index.
3. Make the previous node points to one create at step `1`.
4. Set the `node` pointer to `currNode`

_Note: When the `for` loop is completed, I set the value of the last node to `nullptr`; just so `Printer::Print` knows when to stop_ 

`Useful Resources`:

N/A