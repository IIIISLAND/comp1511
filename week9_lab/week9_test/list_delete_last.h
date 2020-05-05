Your task is to add code to this function in list_delete_last.c:

//
// Delete the last node in list.
// The deleted node is freed.
// The head of the list is returned.
//
struct node *delete_last(struct node *head) {

    // PUT YOUR CODE HERE (change the next line!)
    return NULL;
}
Note list_delete_last.c uses the following familiar data type:
struct node {
    struct node *next;
    int          data;
};
delete_last is given one argument, head, which is the pointer to the first node in a linked list.
Add code to delete_last so that it deletes the last node from list.

delete_last should return a pointer to the new list.

If the list is now empty delete_last should return NULL.

delete_last should call free to free the memory of the node it deletes.

For example if the linked list contains these 8 elements:

16, 7, 8, 12, 13, 19, 21, 12
delete_last should return a pointer to a list with these elements:

16, 7, 8, 12, 13, 19, 21
Testing
list_delete_last.c also contains a main function which allows you to test your delete_last function.
This main function:

converts the command-line arguments to a linked list
assigns a pointer to the first node in the linked list to head
calls delete_last(head)
prints the result.
Do not change this main function. If you want to change it, you have misread the question.

Your delete_last function will be called directly in marking. The main function is only to let you test your delete_last function

cp -n /web/cs1511/20T1/activities/list_delete_last/list_delete_last.c .
dcc list_delete_last.c -o list_delete_last
./list_delete_last 16 7 8 12 13 19 21 12
[16, 7, 8, 12, 13, 19, 21]
./list_delete_last 2 4 6 2 4 6
[2, 4, 6, 2, 4]
./list_delete_last 42
[]
./list_delete_last
[]
Assumptions/Restrictions/Clarifications.
delete_last should call free to free the memory for the node it deletes
delete_first should not change the data fields of list nodes.

delete_last should not use arrays.

delete_last should not call malloc.

delete_last should not call scanf (or getchar or fgets).

delete_last should not print anything. It should not call printf.

Do not change the supplied main function. It will not be tested or marked.

When you think your program is working you can autotest to run some simple automated tests:

