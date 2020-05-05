// Battle Royale Player List Organiser

// Keeps track of players in a game
// where they can be eliminated one by one

// Also a demo of the basic functionality
// of Linked Lists

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NAME_LENGTH 100

struct player {
    char name[MAX_NAME_LENGTH];
    struct player *next;
};

struct player *createPlayer(char newName[], struct player *newNext);
void printPlayers(struct player *head);
struct player *insertPlayer(struct player *insertionPoint, char newName[]);

int main(void) {
    struct player *head = NULL;
    head = insertPlayer(head, "Marc");
    head = insertPlayer(head, "Tom");
    head = insertPlayer(head, "Goku");
    head = insertPlayer(head, "Bulma");
    head = insertPlayer(head, "Master Roshi");
        
    printPlayers(head);
}

// Create and allocate memory for a player struct
// return a pointer to that struct
struct player *createPlayer(char newName[], struct player *newNext) {
    struct player *newPlayer = malloc(sizeof(struct player));
    strcpy(newPlayer->name, newName);
    newPlayer->next = newNext;
    return newPlayer;
}

// Loop through all players in the list starting
// at head and print out their names
void printPlayers(struct player *head) {
    struct player *current = head;
    while (current != NULL) { // have printed out nodes up to current
        printf("%s\n", current->name);
        current = current->next;
    }
}

// Insert a player into a list of players
// Insert after the insertion point player
// return the insertion point (unless it was NULL)
// in which case we return a pointer to the new
// player
struct player *insertPlayer(struct player *insertionPoint, char newName[]) {
    struct player *newPlayer = createPlayer(newName, NULL);
    
    if (insertionPoint == NULL) { // the list is NULL
        insertionPoint = newPlayer;
    } else { // the insertionPoint is a node
        newPlayer->next = insertionPoint->next;
        insertionPoint->next = newPlayer;
    }
    return insertionPoint;    
}




