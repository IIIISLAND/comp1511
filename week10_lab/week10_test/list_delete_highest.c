// List Delete Highest
// Will find the highest value stored in a linked list
// then will delete all occurences of that value
// in the list.

// Marc Chee (cs1511@cse.unsw.edu.au), April 2020

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#define MIN_VALUE -1

struct node {
    struct node *next;
    int          data;
};

struct node *delete_highest(struct node *head);
int return_highest(struct node *head);
struct node *delete_contains(int value, struct node *head, int *num_removed);
struct node *strings_to_list(int len, char *strings[]);
void print_list(struct node *head);

int main(int argc, char *argv[]) {
    // create linked list from command line arguments
    struct node *head = strings_to_list(argc - 1, &argv[1]);

    struct node *new_head = delete_highest(head);
    print_list(new_head);

    return 0;
}

// deletes all occurences of the highest value
// nodes in a list
// returns the head of the list
struct node *delete_highest(struct node *head) {
    if (head == NULL) {
        return head;
    }
    int highest = return_highest(head);
    
    // keep removing elements until there are none
    // of the highest left
    int num_removed = 1;
    while (num_removed) {
        head = delete_contains(highest, head, &num_removed);
    }
    return head;
}

// returns the highest value in the list
// this function assumes that the list has
// at least one element!
int return_highest(struct node *head) {
    int highest = head->data;
    struct node *current = head->next;
    while (current != NULL) {
        if (current->data > highest) {
            highest = current->data;
        }
        current = current->next;
    }
    return highest;
}

// Delete the first node in the list containing i
// The deleted node is freed.
// If no node contains i, the list is not changed
// num_removed will contain how many elements were removed
// The head of the list is returned.

struct node *delete_contains(int value, struct node *head, int *num_removed) {
    *num_removed = 0;
    if (head == NULL) {
        // list is empty no node to delete
        return NULL;
    } else if (head->data == value) {
        // deleting the first node
        struct node *new_head = head->next;
        free(head);
        *num_removed = 1;
        return new_head;
    } else if (head->next == NULL) {
        // first node is the only node
        // first node is definitely not value
        return head;
    }

    struct node *n = head;
    // find node before first node containing i
    while (n->next->next != NULL && n->next->data != value) {
        n = n->next;
    }

    if (n->next->data == value) {
        struct node *new_next = n->next->next;
        free(n->next);
        n->next = new_next;
        *num_removed = 1;
    }
    return head;
}

// create linked list from array of strings
struct node *strings_to_list(int len, char *strings[]) {
    struct node *head = NULL;
    int i = len - 1;
    while (i >= 0) {
        struct node *n = malloc(sizeof (struct node));
        assert(n != NULL);
        n->next = head;
        n->data = atoi(strings[i]);
        head = n;
        i -= 1;
    }   
    return head;
}

// print linked list
void print_list(struct node *head) {
    printf("[");    
    struct node *n = head;
    while (n != NULL) {
        // If you're getting an error here,
        // you have returned an invalid list
        printf("%d", n->data);
        if (n->next != NULL) {
            printf(", ");
        }
        n = n->next;
    }
    printf("]\n");
}