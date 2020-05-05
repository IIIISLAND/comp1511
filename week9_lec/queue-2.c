// Implementation of a Queue
// Demonstration from lectures in April 2020
// Marc Chee (cs1511@cse.unsw.edu.au)

#include <stdlib.h>
#include <stdio.h>
#include "queue.h"

struct queueInternals {
    struct queueNode *head;
    struct queueNode *tail;
};

struct queueNode {
    struct queueNode *next;
    int data;
};

// Create a new empty queue.
// return the Queue (pointer to the queueInternals)
Queue queueCreate() {
    struct queueInternals *newQueue = malloc(sizeof(struct queueInternals));
    newQueue->head = NULL;
    newQueue->tail = NULL;
    return newQueue;
}

// Create and add an element to a queue
void queueAdd(Queue q, int item) {
    struct queueNode *newNode = malloc(sizeof(struct queueNode));
    newNode->data = item;
    newNode->next = NULL;
    
    if (q->tail == NULL) {
        // there are no nodes in the queue
        q->head = newNode;
    } else {
        // there are nodes in the queue
        q->tail->next = newNode;
    }
    q->tail = newNode;
}

// Remove oldest node in the queue (the head)
// return the value stored in that node
int queueRemove(Queue q) {
    if (q->head == NULL) {
        // list was empty
        printf("Attempted to remove from an empty queue.\n");
        exit(1);
    }
    
    // keep track of the node for removal
    int returnData = q->head->data;
    struct queueNode *remNode = q->head;
    
    // move the head pointer to the second node (or NULL)
    q->head = q->head->next;
    
    if (q->head == NULL) {
        // we removed the final node in the queue, which means
        // tail is now not pointing at a node.
        q->tail = NULL;
    }
    
    free(remNode);
    
    return returnData;
}




