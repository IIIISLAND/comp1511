// A program that tracks players' scores in a game
// This is also a demo of Arrays

// Marc Chee 4/3/2020

#include <stdio.h>

#define NUM_PLAYERS 4

void displayScores(int scoreArray[]);

int main(void) {
    int scores[NUM_PLAYERS] = {0};
    
/*    scores[0] = 2;
    scores[1] = 65;
    scores[2] = 1;
    scores[3] = 40;*/
    
    // Take score input from the user
    int inputCounter = 0;
    while (inputCounter < NUM_PLAYERS) {
        printf("Please type in Player %d's score: ", inputCounter);
        scanf("%d", &scores[inputCounter]);
        inputCounter++;
    }
    
    displayScores(scores);
    
    // loop through and find the current winner (highest score)
    int i = 0;
    int currentHighest = -1; // assuming scores are > 0
    int indexHighest = -1;
    while (i < NUM_PLAYERS) { // have looked at i number of players
        if (scores[i] > currentHighest) {
            // i is the highest scoring player
            indexHighest = i;
            currentHighest = scores[i];
        }
        i++;
    } // i == NUM_PLAYERS
    printf("Player %d is currently winning with a score of %d\n",
        indexHighest, currentHighest
    );
    
    return 0;
}

// Print all current scores to the terminal
void displayScores(int scoreArray[]) {
    int i = 0;
    while (i < NUM_PLAYERS) { // have processed i number of players
        printf("Player %d's score is %d\n", i, scoreArray[i]);
        i++;
    } // i == NUM_PLAYERS
}











