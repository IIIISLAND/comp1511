// Dice Checker demo in Lecture 3

// A program that takes two dice rolls
// Adds them together and tests the total
// against a secret target number.

// This version adds the capability to
// check for invalid input and report or
// modify it

// It will then tell the user whether they
// have met the target or not

// Marc Chee February 2020

#include <stdio.h>

#define SECRET_NUMBER 7
#define MIN_VALUE 1
#define MAX_VALUE 20

int main(void) {
    int dieOne = -1;
    int dieTwo = -1;
    
    // scan in die values from user
    printf("Please type in the value of die one, between %d and %d: ",
        MIN_VALUE, MAX_VALUE);
    scanf("%d", &dieOne);
    
    // check input for correct die values
    if (MIN_VALUE <= dieOne && dieOne <= MAX_VALUE) {
        printf("Roll is valid.\n");
    } else {
        // DIFFERENT SOLUTIONS
        // You can use the comments to choose which
        // of these solutions you want to test
        
        // THE MODULUS SOLUTION
        dieOne = (dieOne % MAX_VALUE) + 1;
        printf("Corrected invalid value to %d.\n", dieOne);

/*        // THE CLAMPING SOLUTION
        if (dieOne < MIN_VALUE) { // below minimum
            dieOne = MIN_VALUE;
        } else if (dieOne > MAX_VALUE) { // above maximum
            dieOne = MAX_VALUE;
        }*/
/*        // THE REJECTION SOLUTION
        printf(
            "Roll of %d was not between %d and %d. Program will exit now.\n",
            dieOne, MIN_VALUE, MAX_VALUE
        );
        // end program here
        return 1;*/
    }
    
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
