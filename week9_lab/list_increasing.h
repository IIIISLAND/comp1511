Your task is to add code to this function in list_increasing.c:

int increasing(struct node *head) {

    // PUT YOUR CODE HERE (change the next line!)
    return 42;

}
increasing is given one argument, head, which is the pointer to the first node in a linked list.
Add code to increasing so that its returns 1 if the list is in increasing order - the value of each list element is larger than the element before.

For example if the linked list contains these 8 elements:

1, 7, 8, 9, 13, 19, 21, 42
increasing should return 1 because is is increasing order

Testing
list_increasing.c also contains a main function which allows you to test your increasing function.
This main function:

converts the command-line arguments to a linked list
assigns a pointer to the first node in the linked list to head
calls list_increasing(head)
prints the result.
Do not change this main function. If you want to change it, you have misread the question.

Your list_increasing function will be called directly in marking. The main function is only to let you test your list_increasing function

Here is how you use main function allows you to test list_increasing:

dcc list_increasing.c -o list_increasing
./list_increasing 1 2 4 8 16 32 64 128 256
1
./list_increasing 2 4 6 5 8 9
0
./list_increasing 13 15 17 17 18 19
0
./list_increasing 2 4
1
./list_increasing 42
1
./list_increasing
1
Assumptions/Restrictions/Clarifications.
increasing should return a single integer.
increasing should not change the linked list it is given. Your function should not change the next or data fields of list nodes.

increasing should not use arrays.

increasing should not call malloc.

increasing should not call scanf (or getchar or fgets).

You can assume the linked list only contains positive integers.

increasing should not print anything. It should not call printf.

Do not change the supplied main function. It will not be tested or marked.