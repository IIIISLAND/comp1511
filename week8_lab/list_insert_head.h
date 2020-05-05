Your task is to add code to this function in list_insert_head.c:

// Insert a new node containing value at the start of the linked list.
// The head of the new list is returned.
struct node *insert_head(int value, struct node *head) {

    // PUT YOUR CODE HERE (change the next line!)
    return NULL;

}
insert_head is given two arguments, value and head. value is an int. head is the pointer to the first node in a linked list.
Add code to insert_head so that it creates a new list node (using malloc) containing value and places it at the start of the list.

insert_head should return a pointer to the new list.

For example if value is 12 and the linked list contains these 3 elements:

16, 7, 8
insert_head should return a pointer to a list with these elements:

12, 16, 7, 8
Testing
list_insert_head.c also contains a main function which allows you to test your insert_head function.
This main function:

converts the command-line arguments to a linked list
assigns a pointer to the first node in the linked list to head
reads a single integer from standard input and assigns it to value
calls insert_head(value, head)
prints the result.
Do not change this main function. If you want to change it, you have misread the question.

Your insert_head function will be called directly in marking. The main function is only to let you test your insert_head function

dcc list_insert_head.c -o list_insert_head
./list_insert_head 16 7 8
12
[12, 16, 7, 8]
./list_insert_head 16
42
[42, 16]
./list_insert_head
2
[2]
Assumptions/Restrictions/Clarifications.
insert_head should not use arrays.
insert_head should not call scanf (or getchar or fgets).

insert_head should not print anything. It should not call printf.

Do not change the supplied main function. It will not be tested or marked.

