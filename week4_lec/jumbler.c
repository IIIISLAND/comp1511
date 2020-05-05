// Code demo for pointers and functions
// Jumbler reads input
// stores it in an array
// "messes up" that input by swapping repeatedly
// prints the output

// Marc Chee 11/3/2020

#include <stdio.h>

#define MAX_NUMS 100

int readInputs(int nums[MAX_NUMS]);
void printNums(int nums[MAX_NUMS], int length);

int main(void) {
    int nums[MAX_NUMS];
    int numInputs = readInputs(nums);
    printNums(nums, numInputs);
    return 0;
}

// Read a specific number of inputs from standard input
// user will specify how many
// return how many inputs were read in
int readInputs(int nums[MAX_NUMS]) {
    int inputCount = 0;
    printf("How many inputs? ");
    scanf("%d", &inputCount);
    int i = 0;
    while (i < inputCount && i < MAX_NUMS) { // have processed i inputs
        scanf("%d", &nums[i]);
        i++;
    } // i is exactly how many numbers we read
    return i;
}

// print out all integers in the array
// up to the maximum number
void printNums(int nums[MAX_NUMS], int length) {
    int i = 0;
    while (i < length) { // have printed out i numbers
        printf("%d ", nums[i]);
        i++;
    }
    printf("\n");
}







