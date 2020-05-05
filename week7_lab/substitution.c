//  Write stdin to stdout encrypted with a Substitution cipher
//  https://en.wikipedia.org/wiki/Substitution_cipher
//
//  The mapping will be supplied as a command-line argument containing 26 characters:
//  These will be an an ordering of the letters 'a'..'z'.

#include <stdio.h>
#include <string.h>

#define ALPHABET_SIZE  26

int encrypt(int character, char mapping[ALPHABET_SIZE + 1]);

int main(void) {
    char cipher[ALPHABET_SIZE + 1];
    fgets(cipher, ALPHABET_SIZE + 1, stdin);
    // this getchar takes the '\n' and discards it
    getchar();
    if (strlen(cipher) != ALPHABET_SIZE) {
        printf("substitution: mapping must contain %d letters\n", ALPHABET_SIZE);
        return 1;
    }

    int character = getchar();
    while (character != EOF) {
        int encrypted_character = encrypt(character, cipher);
        putchar(encrypted_character);
        character = getchar();
    }

    return 0;
}

// encrypt letters with a substitution cipher with the specified mapping

int encrypt(int character, char mapping[ALPHABET_SIZE + 1]) {
    if (character >= 'A' && character <= 'Z') {
        return mapping[character - 'A'] - 'a' + 'A';
    } else if (character >= 'a' && character <= 'z') {
        return mapping[character - 'a'];
    } else {
        return character;
    }
}