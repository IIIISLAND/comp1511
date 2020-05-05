Your task is to add code to this function in list_contains.c:

// Return 1 if value occurs in linked list, 0 otherwise
int contains(int value, struct node *head) {

    // PUT YOUR CODE HERE (change the next line!)
    return 42;

}
contains is given two arguments, an int value and head, which is the pointer to the first node in a linked list.
Add code to contains so that its returns 1 if value occurs in the linked and otherwise it returns 0.

For example if the linked list contains these 8 elements:

1, 7, 8, 9, 13, 19, 21, 42
and contains is called with value of 9,

contains should return 1.

Testing
list_contains.c also contains a main function which allows you to test your contains function.
This main function:

converts the command-line arguments to a linked list
assigns a pointer to the first node in the linked list to head
reads a single integer from standard input and assigns it to value
calls list_contains(value, head)
prints the result.
Do not change this main function. If you want to change it, you have misread the question.

Your list_contains function will be called directly in marking. The main function is only to let you test your list_contains function

Here is how you use main function allows you to test list_contains:

dcc list_contains.c -o list_contains
./list_contains 1 2 3 4
3
1
./list_contains 1 2 3 4
42
0
./list_contains 15 17 17 18
17
1
./list_contains 15 17 17 18
21
0
./list_contains
42
0
Assumptions/Restrictions/Clarifications.
contains should return a single integer.
contains should not change the linked list it is given. Your function should not change the next or data fields of list nodes.

contains should not use arrays.

contains should not call malloc.

contains should not call scanf (or getchar or fgets).

contains should not print anything. It should not call printf.

Do not change the supplied main function. It will not be tested or marked.