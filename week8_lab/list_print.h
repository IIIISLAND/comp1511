Your task is to add code to this function in list_print.c:

// print a linked list in this format:
// 17 -> 34 -> 51 -> 68 -> X
void print(struct node *head) {

    // PUT YOUR CODE HERE
}
print is given one argument, head, which is the pointer to the first node in a linked list.
Add code to print so that it prints the elements in the list

For example if the linked list contains these 8 elements:

1, 7, 8, 9, 13, 19, 21, 42
print should print 1 -> 7 -> 8 -> 9 -> 13 -> 19 -> 21 -> 42 -> X

Testing
list_print.c also contains a main function which allows you to test your print function.
This main function:

converts the command-line arguments to a linked list
assigns a pointer to the first node in the linked list to head
calls list_print(head)
Do not change this main function. If you want to change it, you have misread the question.

Your list_print function will be called directly in marking. The main function is only to let you test your list_print function

Here is how you use main function allows you to test list_print:

dcc list_print.c -o list_print
./list_print 1 2 4 8 16 32 64 128 256
1 -> 2 -> 4 -> 8 -> 16 -> 32 -> 64 -> 128 -> 256 -> X
./list_print 2 4 6 5 8 9
2 -> 4 -> 6 -> 5 -> 8 -> 9 -> X
./list_print 42 4
42 -> 4 -> X
./list_print 43
43 -> X
./list_print
X
Assumptions/Restrictions/Clarifications.
print should not change the linked list it is given. Your function should not change the next or data fields of list nodes.
print should not use arrays.

print should not call malloc.

print should not call scanf (or getchar or fgets).

Do not change the supplied main function. It will not be tested or marked.