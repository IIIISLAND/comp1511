Your task is to add code to this function in lists_diagonal.c:

// Treat the linked lists like they're a 2D array
// and return 1 if the first element is repeated
// diagonally through the lists
int has_diagonal(struct list_node *head) {
    return 0;
}
lists_diagonal is written using the following structs that cannot be changed:
struct node {
    int data;
    struct node *next;
};

struct list_node {
    struct node *my_list;
    struct list_node *next;
};
The node struct is a normal linked list node.

The list_node struct is used to make a linked list where each element contains a list of nodes.

has_diagonal should take a pointer to the head of a list_node list and return a 1 if it finds a diagonal or a 0 if it doesn't. A diagonal in this exercise means that the first number in the first list is the same as the second number in the second list and the third number in the third list and so on.

For example if the list of lists looks like this:

list_node 0 contains the list {5, 0, 0}
list_node 1 contains the list {0, 5, 0}
list_node 2 contains the list {0, 0, 5}
has_diagonal should return 1.

However, if the list of lists looks like this:

list_node 0 contains the list {5, 0, 0, 0}
list_node 1 contains the list {0, 4, 0, 0}
list_node 2 contains the list {0, 0, 5, 0}
list_node 3 contains the list {0, 0, 0, 5}
has_diagonal should return 0, because the 2nd element of the second list does not equal the value of the first element of the first list.

Assumptions/Restrictions/Clarifications.
struct node and struct list_node cannot be edited. They must be used as they are.

You may not use arrays in this solution. Arrays are not necessary to complete this task.

You can assume that you'll never receive an empty list of list_nodes.

You can assume that all lists of nodes are also not empty.

You can assume that there will always be the same number of nodes in each list and that will be the same number of list_nodes. That is to say, the 2D grid formed by the lists will always be square. Your submitted file may contain a main function. It will not be tested or marked.

