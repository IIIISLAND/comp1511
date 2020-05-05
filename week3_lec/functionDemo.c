// A simple demo of how functions work

// Marc Chee, March 2020

#include <stdio.h>

// For our main to know what a function is, it should be
// declared before the main function starts
int add(int a, int b);
void print_add(int a, int b);

int main(void) {
    int first = 3;
    int second = 7;
    
    // use the add function to find a value that
    // we will then store in total
    int total = add(first, second);
    
    // use the print_add function to write some
    // information to the terminal
    print_add(first, second);
    
    return 0;
}

// a simple function that adds two ints together and
// returns the sum
int add(int a, int b) {
    return a + b;
}

// a simple function that adds two ints together and
// prints the result to the terminal
void print_add(int a, int b) {
    int result = a + b;
    printf("The result of the addition is: %d\n", result);
}
