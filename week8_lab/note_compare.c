#include <stdio.h>
#include <stdlib.h>
#include <assert.h>


//There are 10 octaves (0 to 9) and 12 notes (0 to 11)
struct note {
    int octave;
    int key;
    struct note *next;
};

int note_compare(struct note *a, struct note *b);
struct note *create_note(int octave, int key);

int main(void) {
    printf("this should brea\n");
    int octave, key;
    scanf("%d %d", &octave, &key);
    struct note a = {octave, key};
    scanf("%d %d", &octave, &key);
    struct note b = {octave, key};
    int compared = note_compare(&a, &b);
    if (compared == 1) {
        printf("a is higher than b\n");
    } else if (compared == -1) {
        printf("b is higher than a\n");
    } else {
        printf("a and b are equal\n");
    }

    return 0;
}

//Returns 1 if a is higher than b
//       -1 if b is higher than a
//        0 if they are equal
int note_compare(struct note *a, struct note *b) {
    assert(a != NULL && b != NULL);
    if (a->octave < b->octave) {
        return -1;
    } else if (a->octave > b->octave){
        return 1;
    } else {
        if (a->key < b ->key){
            return -1;
        } else if (a->key > b->key) {
            return 1;
        } else {
            return 0;
        }
    }

}