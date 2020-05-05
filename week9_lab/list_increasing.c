#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

struct node {
    struct node *next;
    int          data;
};

int increasing(struct node *head);
struct node *strings_to_list(int len, char *strings[]);

int main(int argc, char *argv[]) {
    // create linked list from command line arguments
    struct node *head = strings_to_list(argc - 1, &argv[1]);

    int result = increasing(head);
    printf("%d\n", result);

    return 0;
}

// return 1 if values in a linked list are in increasing order,
// return 0, otherwise

int increasing(struct node *head) {
    // If the list is empty, it's considered increasing, so return 1.
    if (head == NULL) {
        return 1;
    }

    // Assume that it is increasing, and look for evidence
    // that proves otherwise.
    int is_increasing = 1;

    struct node *curr = head;
    while (curr->next != NULL) {
        // If this one is not less than the next one,
        // the list definitely isn't increasing
        // (since these two nodes are out of order).
        if (curr->data >= curr->next->data)  {
            is_increasing = 0;
        }
        curr = curr->next;
    }

    // At this point, if is_increasing is still 1, we didn't find
    // any nodes that were out of order.
    //
    // However, if we did find any nodes that were out of order,
    // we set it to 0 in the loop above.
    //
    // So, is_increasing contains the answer to return.
    return is_increasing;
}


// create linked list from array of strings
struct node *strings_to_list(int len, char *strings[]) {
    struct node *head = NULL;
    for (int i = len - 1; i >= 0; i = i - 1) {
        struct node *n = malloc(sizeof (struct node));
        assert(n != NULL);
        n->next = head;
        n->data = atoi(strings[i]);
        head = n;
    }
    return head;
}
//Alternative solution for list_increasing.c
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

struct node {
    struct node *next;
    int          data;
};

int increasing(struct node *head);
struct node *strings_to_list(int len, char *strings[]);

int main(int argc, char *argv[]) {
    // create linked list from command line arguments
    struct node *head = strings_to_list(argc - 1, &argv[1]);

    int result = increasing(head);
    printf("%d\n", result);

    return 0;
}

// return 1 if values in a linked list are in increasing order,
// return 0, otherwise

int increasing(struct node *head) {
    if (head == NULL) {
        return 1;
    }

    struct node *p = head;
    while (p->next != NULL) {
        if (p->data >= p->next->data)  {
            return 0;
        }
        p = p->next;
    }

    return 1;
}


// create linked list from array of strings
struct node *strings_to_list(int len, char *strings[]) {
    struct node *head = NULL;
    for (int i = len - 1; i >= 0; i = i - 1) {
        struct node *n = malloc(sizeof (struct node));
        assert(n != NULL);
        n->next = head;
        n->data = atoi(strings[i]);
        head = n;
    }
    return head;
}
//Alternative solution for list_increasing.c
#include <stdio.h>
#include <assert.h>

struct node {
    struct node *next;
    int          data;
};

// return 1 if values in a linked list in increasing order
// recursive solution

int increasing(struct node *head) {
    if (head == NULL || head->next == NULL) {
        return 1;
    } else if (head->data >= head->next->data)  {
        return 0;
    } else {
        return increasing(head->next);
    }
}