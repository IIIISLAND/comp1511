// Dice Statistics

// This will show all possible rolls of two dice
// and report the odds of rolling a particular number

// Marc Chee 26/02/2020

#include <stdio.h>

int main(void) {
    int dieOneSize = 0;
    int dieTwoSize = 0;
    int target = 0;
    int numRolls = 0;
    int numSuccesses = 0;
    
    // take input for both die sizes and a target value
    printf("Please type in the size of the first die: ");
    scanf("%d", &dieOneSize);
    printf("Please type in the size of the second die: ");
    scanf("%d", &dieTwoSize);
    printf("Please type in the target value: ");
    scanf("%d", &target);
    
    // Loop through all possible roll outcomes and print
    int counterOne = 1;
    while (counterOne <= dieOneSize) { 
        // have checked up to but not including counterOne
        int counterTwo = 1;
        while (counterTwo <= dieTwoSize) { 
            // have checked up to but not including counterTwo
            numRolls++;
            int total = counterOne + counterTwo;
            if (total == target) {
                numSuccesses++;
                printf("%d + %d = %d\n", counterOne, counterTwo, total);
            }           
            counterTwo++;
        } // counterTwo == dieTwoSize + 1
        counterOne++;
    } 
    // counterOne == dieOneSize + 1
    // have rolled numRolls times
    
    printf("We rolled %d %d times out of %d total rolls.\n", 
        target, numSuccesses, numRolls
    );
    double percentage = numSuccesses/(numRolls * 1.0) * 100;
    printf("Success chance is %lf percent.\n", percentage);
    return 0;
}










