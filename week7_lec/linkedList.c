// A demo of a basic linked list

// Marc Chee (cs1511@cse.unsw.edu.au), edited March 2020

#include <stdlib.h>
#include <stdio.h>

struct node {
    int data;
    struct node *next;
};

struct node *createNode(int data, struct node *next);
void printData(struct node *n);

int main (void) {
    struct node *head = createNode(1, NULL);
    head->next = createNode(2, NULL);
    
    printData(head);
    
    // note that this free isn't freeing all of the nodes!
    // We'll cover that next week
    free(head);    
    return 0;
}

// Create a node using the data and next pointer provided
// Return a pointer to this node
struct node *createNode(int data, struct node *next) {
    struct node *nodePtr;
    nodePtr = malloc(sizeof(struct node));
    nodePtr->data = data;
    nodePtr->next = next;
    return nodePtr;
}

// Loop through a list of nodes, printing out their data
void printData(struct node *n) {
    while (n != NULL) { // have printed from list's head up to just before n
        printf("%d\n", n->data);
        n = n->next;
    }
}

