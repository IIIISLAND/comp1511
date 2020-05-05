#include <stdio.h>

int main(void) {
    int a, b, c;
    int tmp;

    printf("Enter integer: ");
    scanf("%d", &a);

    printf("Enter integer: ");
    scanf("%d", &b);

    printf("Enter integer: ");
    scanf("%d", &c);

    tmp = b;
    b = a - (1 - (a > b)) * (a - b);
    a = a - (1 - (a < tmp)) * (a - tmp);
    tmp = c;
    c = a - (1 - (a > c)) * (a - c);
    a = a - (1 - (a < tmp)) * (a - tmp);
    tmp = c;
    c = b - (1 - (b > c)) * (b - c);
    b = b - (1 - (b < tmp)) * (b - tmp);

    printf("The integers in order are: %d %d %d\n", a, b, c);

    return 0;
}

//Alternative solution for order3_challenge1.c
//!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
#include <stdio.h>

int main(void) {
    int a, b, c;
    int tmp;

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

    tmp = b;
    b = a - (1 - (a > b)) * (a - b);
    a = a - (1 - (a < tmp)) * (a - tmp);
    tmp = c;
    c = a - (1 - (a > c)) * (a - c);
    a = a - (1 - (a < tmp)) * (a - tmp);
    tmp = c;
    c = b - (1 - (b > c)) * (b - c);
    b = b - (1 - (b < tmp)) * (b - tmp);

    printf("The integers in order are: %d %d %d\n", a, b, c);

    return 0;
}