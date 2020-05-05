Your task is to add code to this function in list_intersection_size.c:

// return the number of values which occur in both linked lists
// no value is repeated in either list
int intersection_size(struct node *head1, struct node *head2) {

    // PUT YOUR CODE HERE (change the next line!)
    return 42;

}
Note list_intersection_size.c uses the following familiar data type:
struct node {
    struct node *next;
    int          data;
};
intersection_size is given two arguments, head1 and head2, which are pointers to the first node of linked lists.
Add code to intersection_size so that its returns the number of values that occur in both linked list.

Assume no value occurs more than once in either linked list.

For example, if the two lists contain these values:

3, 1, 4
2, 7, 1, 8, 3
intersection_size should return 2, because these 2 elements occur in both lists:

1, 3
Testing
list_intersection_size.c also contains a main function which allows you to test your intersection_size function.
This main function:

uses a command line argument of "-" to separate the values for two linked lists.
converts the command-line arguments before the "-" to a linked list
assigns a pointer to the first node in the linked list to head1
converts the command-line arguments after the "-" to a linked list
assigns a pointer to the first node in the linked list to head2
calls intersection_size(head1, head2)
prints the result.
Do not change this main function. If you want to change it, you have misread the question.

Your intersection_size function will be called directly in marking. The main function is only to let you test your intersection_size function

Here is how the main function allows you to test intersection_size:

cp -n /web/cs1511/20T1/activities/list_intersection_size/list_intersection_size.c .
dcc list_intersection_size.c -o list_intersection_size
./list_intersection_size 3 1 4 - 2 7 1 8 3
2
./list_intersection_size 16 7 8 12 - 13 19 21 12
1
./list_intersection_size 2 4 6 - 2 4 6
3
./list_intersection_size 3 5 7 11 13 - 15 17 19 23 29
0
./list_intersection_size 1 2 3 4 - 3 2 1
3
./list_intersection_size - 1 2 3 4
0
./list_intersection_size 4 3 2 1 -
0
./list_intersection_size -
0
Assumptions/Restrictions/Clarifications.
intersection_size should return a single integer.
No value will occur more than once in either linked list.

intersection_size should not change the linked lists it is given. Your function should not change the next or data fields of list nodes.

intersection_size should not use arrays.

intersection_size should not call malloc.

intersection_size should not call scanf (or getchar or fgets).

intersection_size should not print anything. It should not call printf.

Do not change the supplied main function. It will not be tested or marked.

