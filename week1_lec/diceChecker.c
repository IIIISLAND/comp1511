// Dice Checker demo in Lecture 2

// A program that takes two dice rolls
// Adds them together and tests the total
// against a secret target number.

// It will then tell the user whether they
// have met the target or not

// Marc Chee February 2020

#include <stdio.h>

#define SECRET_NUMBER 7

int main(void) {
    int dieOne = -1;
    int dieTwo = -1;
    
    // scan in die values from user
    printf("Please type in the value of die one: ");
    scanf("%d", &dieOne);    
    printf("Please type in the value of die two: ");
    scanf("%d", &dieTwo);
    
    // calculate and report total
    int total = dieOne + dieTwo;
    printf("You rolled: %d total.\n", total);
    
    // Test against secret target
    if (total >= SECRET_NUMBER) { // target met
        printf("Roll was successful.\n");
    } else { // total less than SECRET_NUMBER
        printf("Roll was a failure.\n");
    }

    return 0;
}
