// Read command line args and print them out
// converting all upper case letters to lower

// Marc Chee, April 2020

#include <stdio.h>
#include <ctype.h>

void print_lower_word(char *word);

int main(int argc, char *argv[]) {
    int i = 1;
    while (i < argc) {
        print_lower_word(argv[i]);
        putchar(' ');
        i++;
    }
    putchar('\n');
}

void print_lower_word(char *word) {
    int i = 0;
    while(word[i] != '\0') {
        putchar(tolower(word[i]));
        i++;
    }
}