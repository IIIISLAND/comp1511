// A heavily modified version of paint.c for Assignment 1

// This is starter code for the Tourist Program

// This program was written by Marc Chee (marc.chee@unsw.edu.au)
// in June 2019
//

#include <stdio.h>

// The dimensions of the map
#define N_ROWS 10
#define N_COLS 10

// Helper Function: Print out the map as a 2D grid
void printMap(int map[N_ROWS][N_COLS], int posR, int posC);


int main(void) {
    int map[N_ROWS][N_COLS] = {0};
    int posR = 5;
    int posC = 5;
    
    printMap(map, posR, posC);
    
    // Game Loop: Take directions from the player
    // and move the tourist each time
    
    int gameOver = 0;
    while (!gameOver) {
        // Losing the game?
        if (map[posR][posC] > 0) { // we've been hewre before
            printf("I've already seen this location, how boring.\n");
            gameOver = 1;
        }

        // mark where we've been
        map[posR][posC]++;   
    
        // take input and move the tourist
        printf("Please type in a num-pad direction: ");
        int inputDir = 0;
        scanf("%d", &inputDir);
        if (inputDir == 2) { // down
            posR++;
        } else if (inputDir == 4) { // left
            posC--;
        } else if (inputDir == 6) { // right
            posC++;
        } else if (inputDir == 8) { // up
            posR--;
        } else if (inputDir == 0) { // exit
            gameOver = 1;
        }
        // what if the tourist walks off the map?
        // don't allow the tourist to leave the map
        if (posR < 0) { // top
            posR = 0;
        } else if (posR >= N_ROWS) { // bottom
            posR = N_ROWS - 1;
        } else if (posC < 0) { // left
            posC = 0;
        } else if (posC >= N_COLS) { // right
            posC = N_COLS - 1;
        }
        
        printMap(map, posR, posC);
    }
    
    return 0;
}


// Prints the map, by printing the integer value stored in
// each element of the 2-dimensional map array.
// Prints a T instead at the position posR, posC
void printMap(int map[N_ROWS][N_COLS], int posR, int posC) {
    int row = 0;
    while (row < N_ROWS) {
        int col = 0;
        while (col < N_COLS) {
            if(posR == row && posC == col) { // at the tourist's position
                printf("T ");
            } else {
                printf("%d ", map[row][col]);
            }            
            col++;
        }
        row++;
        printf("\n");
    }
}

