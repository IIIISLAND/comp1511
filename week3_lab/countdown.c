#include <stdio.h>

int main(int argc, char *argv[]) {
    // For this loop, we have a counter, which we'll call `num`.
    int num = 10;

    // And, as long as `num` is greater than or equal to zero:
    while (num >= 0) { // Have printed all numbers strictly between 10 and num.
        // We print out the counter ---
        printf("%d\n", num);
        
        // --- and subtract one from it.
        num = num - 1;
    } // num = -1

    return 0;
}