#include <stdio.h>

int main(void) {
    int a, b, c;

    printf("Enter integer: ");
    scanf("%d", &a);

    printf("Enter integer: ");
    scanf("%d", &b);

    printf("Enter integer: ");
    scanf("%d", &c);

    printf("The integers in order are:");
    printf(" %d", a - (1 - (a < (b - (1 - (b < c)) * (b - c)))) * (a - (b - (1 - (b < c)) * (b - c))));
    printf(" %d", (a - (1 - (a < b)) * (a - b)) - (1 - ((a - (1 - (a < b)) * (a - b)) > (c - (1 - (c < (a - (1 - (a > b)) * (a - b)))) * (c - (a - (1 - (a > b)) * (a - b)))))) * ((a - (1 - (a < b)) * (a - b)) - (c - (1 - (c < (a - (1 - (a > b)) * (a - b)))) * (c - (a - (1 - (a > b)) * (a - b))))));
    printf(" %d", a - (1 - (a > (b - (1 - (b > c)) * (b - c)))) * (a - (b - (1 - (b > c)) * (b - c))));
    printf("\n");

    return 0;
}

//Alternative solution for order3_challenge2.c

#include <stdio.h>

int main(void) {
    int a, b, c;

    printf("Enter integer: ");
    if (scanf("%d", &a) != 1) {
        return 1; // EXIT_FAILURE would be more portable
    }

    printf("Enter integer: ");
    if (scanf("%d", &b) != 1) {
        return 1;
    }

    printf("Enter integer: ");
    if (scanf("%d", &c) != 1) {
        return 1;
    }

    printf("The integers in order are:");
    printf(" %d", a - (1 - (a < (b - (1 - (b < c)) * (b - c)))) * (a - (b - (1 - (b < c)) * (b - c))));
    printf(" %d", (a - (1 - (a < b)) * (a - b)) - (1 - ((a - (1 - (a < b)) * (a - b)) > (c - (1 - (c < (a - (1 - (a > b)) * (a - b)))) * (c - (a - (1 - (a > b)) * (a - b)))))) * ((a - (1 - (a < b)) * (a - b)) - (c - (1 - (c < (a - (1 - (a > b)) * (a - b)))) * (c - (a - (1 - (a > b)) * (a - b))))));
    printf(" %d", a - (1 - (a > (b - (1 - (b > c)) * (b - c)))) * (a - (b - (1 - (b > c)) * (b - c))));
    printf("\n");

    return 0;
}