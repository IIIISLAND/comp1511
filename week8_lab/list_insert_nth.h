Your task is to add code to this function in list_insert_nth.c:

// Insert a new node containing value at position n of the linked list.
// if n == 0, node is inserted at start of list
// if n >= length of list, node is appended at end of list
// The head of the new list is returned.
struct node *insert_nth(int n, int value, struct node *head) {

    // PUT YOUR CODE HERE (change the next line!)
    return NULL;

}
insert_nth is given three arguments, n, value and head. n is an int. value is an int. head is the pointer to the first node in a linked list.
Add code to insert_nth so that it creates a new list node (using malloc) containing value and places it before position n of the list.

The elements are counted in the same manner as array elements (zero-based), so the first element in the list is regarded as at position 0, the second element position 1 and so on.

If there are less than n elements in the list, the new list node should be appended to the end of the list.

insert_nth should return a pointer to the new list.

For example if n is 1 and value is 12 and the linked list contains these 3 elements:

16, 7, 8
insert_nth should return a pointer to a list with these elements:

16, 12, 7, 8
Testing
list_insert_nth.c also contains a main function which allows you to test your insert_nth function.
This main function:

converts the command-line arguments to a linked list
assigns a pointer to the first node in the linked list to head
reads an integer from standard input and assigns it to n
reads a second integer from standard input and assigns it to value
calls insert_nth(n, value, head)
prints the result.
Do not change this main function. If you want to change it, you have misread the question.

Your insert_nth function will be called directly in marking. The main function is only to let you test your insert_nth function

dcc list_insert_nth.c -o list_insert_nth
./list_insert_nth 16 7 8
0
12
[12, 16, 7, 8]
./list_insert_nth 16 7 8
1
12
[16, 12, 7, 8]
./list_insert_nth 16 7 8
2
12
[16, 7, 12, 8]
./list_insert_nth 16 7 8
3
12
[16, 7, 8, 12]
./list_insert_nth 16 7 8
42
12
[16, 7, 8, 12]
./list_insert_nth 42
0
16
[16, 42]
./list_insert_nth
0
2
[2]
./list_insert_nth
10
2
[2]
Assumptions/Restrictions/Clarifications.
insert_nth should not use arrays.
insert_nth should not call scanf (or getchar or fgets).

insert_nth should not print anything. It should not call printf.

Do not change the supplied main function. It will not be tested or marked.