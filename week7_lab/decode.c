//  https://en.wikipedia.org/wiki/Substitution_cipher
//
// The mapping used to encrypt the input
// will be supplied as a command-line argument containing 26 characters:
// These will be an an ordering of the letters 'a'..'z'.

#include <stdio.h>
#include <string.h>
#include <assert.h>

#define ALPHABET_SIZE 26

void compute_inverse_mapping(char mapping[ALPHABET_SIZE + 1], char inverse_mapping[ALPHABET_SIZE + 1]);
int decrypt(int character, char  inverse_mapping[ALPHABET_SIZE + 1]);

int main(int argc, char *argv[]) {
    char inverse_mapping[ALPHABET_SIZE] = {0};
    char cipher[ALPHABET_SIZE + 1];
    fgets(cipher, ALPHABET_SIZE + 1, stdin);
    // this getchar takes the '\n' and discards it
    getchar();
    if (strlen(cipher) != ALPHABET_SIZE) {
        printf("decode: mapping must contain %d letters\n", ALPHABET_SIZE);
        return 1;
    }

    compute_inverse_mapping(cipher, inverse_mapping);

    int character = getchar();
    while (character != EOF) {
        int decrypted_character = decrypt(character, inverse_mapping);
        putchar(decrypted_character);
        character = getchar();
    }

    return 0;
}


// mapping must contain an ordering of letters 'a'..'z'
// the inverse_mapping will be stored in inverse_mapping

void compute_inverse_mapping(char mapping[ALPHABET_SIZE + 1], char inverse_mapping[ALPHABET_SIZE + 1]) {
    int i = 0;
    while (i < ALPHABET_SIZE) {
        int character = mapping[i];
        assert(character >= 'a' && character <= 'z');
        inverse_mapping[character - 'a'] = 'a' + i;
        i = i + 1;
    }
}

// decrypt letters with a substitution cipher with the specified inverse_mapping

int decrypt(int character, char inverse_mapping[ALPHABET_SIZE + 1]) {
    if (character >= 'A' && character <= 'Z') {
        return inverse_mapping[character - 'A'] - 'a' + 'A';
    } else if (character >= 'a' && character <= 'z') {
        return inverse_mapping[character - 'a'];
    } else {
        return character;
    }
}