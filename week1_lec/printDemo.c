// Demo of reading and printing variables
// Marc Chee (cs1511@cse.unsw.edu.au), September 2019

#include <stdio.h>

#define ANSWER 42

int main(void) {
    int seven = 7;
    int answer;
    printf("Please type in a number:\n");
    scanf("%d", &answer);
    printf("You typed in %d and the real answer is %d\n", answer, ANSWER);
    return 0;
}
