// Read numbers in a loop, and calculate their sum.
// A sample solution.

#include <stdio.h>
#include <stdlib.h>

int read_num(void);

int main(void) {
    printf("How many numbers: ");
    int amount = read_num();

    int sum = 0;
    int i = 0;
    while (i < amount) {
        sum += read_num();
        i++;
    }

    printf("The sum is: %d\n", sum);

    return 0;
}

// Note: you did not need to check that scanf succeeds for this exercise.
int read_num(void) {
    int num;
    if (scanf("%d", &num) != 1) {
        printf("Could not read a number\n");
        exit(EXIT_FAILURE);
    }
    return num;
}