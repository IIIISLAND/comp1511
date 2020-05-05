//complete note_subtract() and note_print()
//Completed by:
//On:

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>


//There are 10 octaves (0 to 9) and 12 notes (0 to 11)
struct note {
    int octave;
    int key;
    struct note *next;
};

struct note *note_subtract(struct note *higher, struct note *lower);
struct note *create_note(int octave, int key);
void print_note(struct note *n);

int main(void) {
    int octave, key;
    scanf("%d %d", &octave, &key);
    struct note *a = create_note(octave, key);
    scanf("%d %d", &octave, &key);
    struct note *b = create_note(octave, key);
    struct note *diff = note_subtract(a, b);
    print_note(diff);
    return 0;
}

//Mallocs a note and creates it given an octave and a key
struct note *create_note(int octave, int key) {
    struct note *new_note = malloc(sizeof(struct note));
    new_note->octave = octave;
    new_note->key = key;
    new_note->next = NULL;
    return new_note;
}


// For a note with octave 0, and note 9,
// `print_note` should print:
// "0 09\n"
void print_note(struct note *n) {
    printf("%d %02d\n", n->octave, n->key);
}



//Returns a pointer to a malloced struct containing the difference between a 
//higher and a lower note
struct note *note_subtract(struct note *higher, struct note *lower) {
    
    int key = higher->key - lower->key;
    int octave = higher->octave - lower->octave;
    if (key < 0) {
        octave = octave - 1;
        key = 12 + key;
    }
    
    return create_note(octave, key);

}