// A series of demos on looping in C

// Marc Chee, February 2020

#include <stdio.h>

int main(void) {
    // *****************************************************
    // This first loop is a basic loop with a counter

    // an integer outside the loop
    int counter = 0;

    while (counter < 10) { // this code has run counter number of times
        printf("The first loop has completed %d times.\n", counter);
        counter = counter + 1;
    }
    // When counter hits 10 and the loop's test fails
    // the program will exit the loop

    // *****************************************************
    // This second loop shows the risk of asking the wrong
    // question in the loop!
    // This program will never end if this loop runs!
    //while (1 < 2) {
        // Never going to give you up
        // Never going to let you down . . .
    //}

    // *****************************************************
    // This loop will end only when a certain condition is
    // met. When it detects that the input number is odd
    
    // an integer outside the loop
    int endLoop = 0;

    // The loop will exit if it reads an odd number
    while (endLoop == 0) {
        int inputNumber;
        printf("Please type in a number: ");
        scanf("%d", &inputNumber);
        if (inputNumber % 2 == 0) {
            printf("Number is even.\n");
        } else {
            printf("Number is odd.\n");
            endLoop = 1;
        }
    }

    // *****************************************************
    // A loop within a loop. These should draw a grid of
    // stars
    
    int y = 0;
    // loop through and print multiple rows
    while (y < 10) { // we have printed y rows
        // print a single row
        int x = 0;
        while (x < 10) { // we have printed x stars in this row
            printf("*");
            x = x + 1;
        }
        // the row is finished, start the next line
        printf("\n");
        y = y + 1;
    }

    return 0;
}
