Your task is to add code to this function in list_delete_first.c:

//
// Delete the first node in list.
// The deleted node is freed.
// The head of the list is returned.
//
struct node *delete_first(struct node *head) {

    // PUT YOUR CODE HERE (change the next line!)
    return NULL;
}
Note list_delete_first.c uses the following familiar data type:
struct node {
    struct node *next;
    int          data;
};
delete_first is given one argument, head, which is the pointer to the first node in the linked list.
Add code to delete_first so that it deletes the first node from list.

delete_first should return a pointer to the new first node in the list.

If the list is now empty delete_first should return NULL.

delete_first should call free to free the memory of the node it deletes.

For example if the linked list contains these 8 elements:

16, 7, 8, 12, 13, 19, 21, 12
delete_first should return a pointer to a list with these elements:

7, 8, 12, 13, 19, 21, 12
Hint: this is a simple task requiring only a few lines of code.

Testing
list_delete_first.c also contains a main function which allows you to test your delete_first function. It converts command-line arguments to a linked list, calls delete_first, and then prints the result.
Do not change this main function. If you want to change it, you have misread the question.

Your delete_first function will be called directly in marking. The main function is only to let you test your delete_first function

Here is how you the main function allows you to test delete_first:

cp -n /web/cs1511/20T1/activities/list_delete_first/list_delete_first.c .
dcc list_delete_first.c -o list_delete_first
./list_delete_first 16 7 8 12 13 19 21 12
[7, 8, 12, 13, 19, 21, 12]
./list_delete_first 2 4 6 2 4 6
[4, 6, 2, 4, 6]
./list_delete_first 42
[]
./list_delete_first
[]
Assumptions/Restrictions/Clarifications.
delete_first should call free to free the memory for the node it deletes
delete_first should not change the data fields of list nodes.

delete_first should not use arrays.

delete_first should not call malloc.

delete_first should not call scanf (or getchar or fgets).

delete_first should not print anything. It should not call printf.

Do not change the supplied main function. It will not be tested or marked.