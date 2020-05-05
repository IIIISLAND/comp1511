// These will be an an ordering of the letters 'a'..'z'.
#include <stdio.h> 
#include <string.h> 
#include <assert.h>
#define ALPHABET_SIZE 26

void compute_inverse_mapping(char mapping[ALPHABET_SIZE], char inverse_mapping[ALPHABET_SIZE]);
int decrypt(int character, char  inverse_mapping[ALPHABET_SIZE]);
void gene_mapping(char mapping[ALPHABET_SIZE], char buffer[1000]);
    
    int main(void) {
    char buffer[1000];
    fgets(buffer,1000, stdin);
    char inverse_mapping[ALPHABET_SIZE] = {0};
    char mapping[ALPHABET_SIZE];
    gene_mapping(mapping, buffer);   
    compute_inverse_mapping(mapping, inverse_mapping);
    
    int character = getchar(); 
    while (character != EOF) {
        int decrypted_character = decrypt(character, inverse_mapping); 
        putchar(decrypted_character);
        character = getchar();
    }
return 0; 
}

void compute_inverse_mapping(char mapping[ALPHABET_SIZE], char inverse_mapping[ALPHABET_SIZE]) { 
    int i = 0;
    while (i < ALPHABET_SIZE) {
        int character = mapping[i];
        assert(character >= 'a' && character <= 'z'); 
        inverse_mapping[character - 'a'] = 'a' + i;
        i = i + 1;
    } 
}

void gene_mapping(char mapping[ALPHABET_SIZE], char buffer[1000]) {
    for (int i = 0;i<ALPHABET_SIZE;i++)
        mapping[i]=buffer[i];

}

int decrypt(int character, char inverse_mapping[ALPHABET_SIZE]) { 
    if (character >= 'A' && character <= 'Z') {
        return inverse_mapping[character - 'A'] - 'a' + 'A'; 
    } 
    else if (character >= 'a' && character <= 'z') {
        return inverse_mapping[character - 'a']; 
    } 
    else {
        return character;
    }
    
}