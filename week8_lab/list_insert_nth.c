#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

struct node {
    struct node *next;
    int          data;
};

struct node *insert_nth(int n, int value, struct node *head);
struct node *create_node(int data, struct node *next);
struct node *strings_to_list(int len, char *strings[]);
void print_list(struct node *head);

int main(int argc, char *argv[]) {
    int n;
    scanf("%d", &n);
    int value;
    scanf("%d", &value);
    // create linked list from command line arguments
    struct node *head = NULL;
    if (argc > 1) {
        // list has elements
        head = strings_to_list(argc - 1, &argv[1]);
    }

    struct node *new_head = insert_nth(n, value, head);
    print_list(new_head);

    return 0;
}


// Insert a new node containing value at position n of the linked list.
// if n == 0, node is inserted at start of list
// if n >= length of list, node is appended at end of list
// The head of the new list is returned.
struct node *insert_nth(int n, int value, struct node *head) {
    struct node *new_node = malloc(sizeof (struct node));
    if (new_node == NULL) {
        fprintf(stderr, "out of memory\n");
        exit(1);
    }
    new_node->data = value;

    // new node is head of list
    if (head == NULL || n == 0) {
        new_node->next = head;
        return new_node;
    }

    int i = n - 1;
    struct node *p = head;
    while (p->next != NULL && i > 0) {
        p = p->next;
        i = i - 1;
    }
    new_node->next = p->next;
    p->next = new_node;
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
//Alternative solution for list_insert_nth.c
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

struct node {
    struct node *next;
    int          data;
};


// Insert a new node containing value at position n of the linked list.
// if n == 0, node is inserted at start of list
// if n >= length of list, node is appended at end of list
// The head of the new list is returned.
// recursive version
struct node *insert_nth(int n, int value, struct node *head) {
    if (n > 0 && head != NULL) {
        head->next = insert_nth(n - 1, value, head->next);
        return head;
    }

    struct node *new_node = malloc(sizeof (struct node));
    if (new_node == NULL) {
        fprintf(stderr, "out of memory\n");
        exit(1);
    }
    new_node->data = value;
    new_node->next = head;

    return new_node;
}