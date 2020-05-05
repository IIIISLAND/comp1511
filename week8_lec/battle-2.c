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
int printPlayers(struct player *head);
struct player *insertPlayer(struct player *insertionPoint, char newName[]);
struct player *insertAlpha(struct player *head, char newName[]);
struct player *removePlayer(struct player *head, char remName[]);
void freePlayers(struct player *head);

int main(void) {
    struct player *head = NULL;
    head = insertAlpha(head, "Marc");
    head = insertAlpha(head, "Tom");
    head = insertAlpha(head, "Goku");
    head = insertAlpha(head, "Bulma");
    head = insertAlpha(head, "Master Roshi");
        
    // Game Loop
    while (printPlayers(head) > 1) {
        printf("Who got knocked out? ");
        char koName[MAX_NAME_LENGTH];
        fgets(koName, MAX_NAME_LENGTH, stdin);
        // strip the \n from the end of the input
        koName[strlen(koName) - 1] = '\0';
        //scanf("%s", koName);
        head = removePlayer(head, koName);
        printf("-------------\n");
    }
    printf("The winner is: %s\n", head->name);
    freePlayers(head);
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
// return how many players are still in the game
int printPlayers(struct player *head) {
    int count = 0;
    struct player *current = head;
    while (current != NULL) { // have printed out nodes up to current
        printf("%s\n", current->name);
        current = current->next;
        count++;
    }
    return count;
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

// Find the point in the list where newName fits alphabetically
// Create and insert a new player into the list in the correct
// position
struct player *insertAlpha(struct player *head, char newName[]) {
    // find the alphabetically correct position
    struct player *current = head;
    struct player *prev = NULL;
    while (current != NULL && strcmp(newName, current->name) > 0) {
        // Loops while newName > current->name
        prev = current;
        current = current->next;
    } // current->name is the first string "higher" than newName in the list
    
    // insert into the position
    struct player *insertPoint = insertPlayer(prev, newName);
    if (prev == NULL) { // inserting at the start of the list
        insertPoint->next = head;
        head = insertPoint;
    }
        
    // return the head of the list
    return head;
}

// Look through the list given in head until a name matches remName
// Remove that node from the list and free it
// return the head of the list (might be a different node)
struct player *removePlayer(struct player *head, char remName[]) {
    // find the player to remove
    struct player *current = head;
    struct player *prev = NULL;
    while (current != NULL && strcmp(remName, current->name) != 0) {
        prev = current;
        current = current->next;
    } // This loop stops with current aimed at the removal target (or NULL)
    
    if (current == NULL) { // we're off the end of the list
        return head;
    }
    
    // remove and free the player
    if (current == head) { // we're trying to remove the head
        head = current->next;
    } else { // we're removing a non-head element
        prev->next = current->next;
    }            
    free(current);
    
    // return the head of the list
    return head;
}

// Free all the players in the list
void freePlayers(struct player *head) {
    struct player *current = head;
    struct player *prev = NULL;
    while (current != NULL) {
        prev = current;
        current = current->next;
        free(prev);
    }
}






