// A word game demoing the halfway point of COMP1511

// Reads in a string of characters
// Reads in another string
// Checks how many letters from the second string
// are in the first string
// Reports how many matched

// Marc Chee 18/3/2020 (cs1511@cse.unsw.edu.au)

#include <stdio.h>

#define MAX_LINE_LENGTH 1024

int testChar(char single, char line[MAX_LINE_LENGTH]);

int main(void) {
    char line[MAX_LINE_LENGTH];
    // read in line of text
    fgets(line, MAX_LINE_LENGTH, stdin);
    
    // read in single character
    int inputChar;
    inputChar = getchar(); // could return -1 if it reads EOF
    // getchar is very similar to:
    // scanf("%c", &inputChar);
    
    // keep scanning until End of Input
    while (inputChar != EOF) {
        // Find how many times inputChar is in line
        int count = testChar(inputChar, line);
        //printf("I saw %c %d times in the line.\n", inputChar, count);
        
        inputChar = getchar();
    }
    
} 

// Find a character in a line
// Return how many times that character appears in the line
int testChar(char single, char line[MAX_LINE_LENGTH]) {
    int i = 0;
    int count = 0;
    while (i < MAX_LINE_LENGTH && line[i] != '\0') { // processed i characters
        if (single == line[i]) {
            count++;
        }
        i++;
    } // processed i characters total, seen single count times
    return count;
}







