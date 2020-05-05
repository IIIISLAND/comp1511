// COMP1511 Array Print Pointer
// Print out the contents of an array, starting
// from index 0 and ending by printing out
// a particular element that is also being
// pointed at by a given pointer

// Marc Chee, March 2020

#include <stdio.h>

#define LENGTH 10

void array_print_pointer(int nums[LENGTH], int *last);

// This is a simple main function that you can use to 
// test your array_print_pointer function.
// It will not be marked - only your array_print_pointer 
// function will be marked.
//
// Note: the autotest does not call this main function!
// It calls your array_print_pointer function directly.
// Any changes that you make to this main function will 
// not affect the autotests.
#include <stdio.h>

#define LENGTH 10

void array_print_pointer(int nums[LENGTH], int *last);

// This is a simple main function that you can use to test your array_print_pointer
// function.
// It will not be marked - only your array_print_pointer function will be marked.
//
// Note: the autotest does not call this main function!
// It calls your array_print_pointer function directly.
// Any changes that you make to this main function will not affect the autotests.

int main(int argc, char *argv[]){
   int nums[LENGTH] = {1,2,3,4,5,6,7,8,9,10};
   int *last = &nums[5];

   //Pass in the address of the sum and product variables
   array_print_pointer(nums, last);

   return 0;
}

// Print an array from the beginning until it reaches
// a pointer. Assumes that the pointer is aimed at one
// of the array elements.
void array_print_pointer(int nums[LENGTH], int *last) {
    int i = 0;
    int stop = 0;
    while (stop == 0 && i < LENGTH) { // printed i numbers
        printf("%d ", nums[i]);
        if (&nums[i] == last) { // last is aimed at nums[i]
            stop = 1;
        }
        i++;
    }
}