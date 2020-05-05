#include <stdio.h>

#define MAX_DIGITS 10

int main(void) {
    int pi[MAX_DIGITS] = {3, 1, 4, 1, 5, 9, 2, 6, 5, 3};
    //From here
    printf("How many digits of pi would you like to print? ");
    int digits;
    scanf("%d", &digits);
    int i = 0;
    while (i < digits) {
        printf("%d", array[i]);
        if (i == 0){
            printf(".");
        }
        i++;
    }
    printf("\n");
    //To here
return 0;
}