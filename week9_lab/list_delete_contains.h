Your task is to add code to this function in list_delete_contains.c:

//
// Delete the first node in the list containing the value `value`.
// The deleted node is freed.
// If no node contains `value`, the list is not changed.
// The head of the list is returned.
//
struct node *delete_contains(int value, struct node *head) {

    // PUT YOUR CODE HERE (change the next line!)
    return NULL;

}
Note list_delete_contains.c uses the following familiar data type:
struct node {
    struct node *next;
    int          data;
};
delete_contains is given two argument, value and head. value is an int. head is the pointer to the first node in a linked list.
Add code to delete_contains so that it deletes the first node in the linked list that whose data field equals value.

If value does not occur in the linked list, the list should not be changed.

If value occurs more than once in the linked list, only the first occurrence should be deleted.

delete_contains should return a pointer to the new list.

If the list is now empty delete_contains should return NULL.

delete_contains should call free to free the memory of the node it deletes.

For example if value is 12 and the linked list contains these 8 elements:

16, 7, 8, 12, 13, 19, 21, 12
delete_contains should return a pointer to a list with these elements:

16, 7, 8, 13, 19, 21, 12
Testing
list_delete_contains.c also contains a main function which allows you to test your delete_contains function.
This main function:

converts the command-line arguments to a linked list
assigns a pointer to the first node in the linked list to head
reads a single integer from standard input and assigns it to value
calls delete_contains(value, head)
prints the result.
Do not change this main function. If you want to change it, you have misread the question.

Your delete_contains function will be called directly in marking. The main function is only to let you test your delete_contains function

cp -n /web/cs1511/20T1/activities/list_delete_contains/list_delete_contains.c .
dcc list_delete_contains.c -o list_delete_contains
./list_delete_contains 16 7 8 12 13 19 21 12
12
[16, 7, 8, 13, 19, 21, 12]
./list_delete_contains 16 7 8 12 13 19 21 12
42
[16, 7, 8, 12, 13, 19, 21, 12]
./list_delete_contains 4 6 2 4 6
2
[4, 6, 4, 6]
./list_delete_contains 42
42
[]
./list_delete_contains
42
[]
Assumptions/Restrictions/Clarifications.
delete_contains should call free to free the memory for the node it deletes
delete_first should not change the data fields of list nodes.

delete_contains should not use arrays.

delete_contains should not call malloc.

delete_contains should not call scanf (or getchar or fgets).

delete_contains should not print anything. It should not call printf.

Do not change the supplied main function. It will not be tested or marked.