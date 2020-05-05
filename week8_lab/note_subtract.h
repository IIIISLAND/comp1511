note_subtract.c uses the following familiar data type, which is similar to the data type you will be using in Assignment 2.
struct note {
    int octave;
    int key;
    Note next;
};
It has also been given a typedef, as shown below:

  typedef struct note *Note;
Your task in this exercise is first to complete the functions int note_subtract(Note a, Note b) and void print_note(Note n) so that they return a new Note created with malloc, with a value that is the larger note subtracted from the smaller.

Download note_subtract.c here, or copy it to your CSE account using the following command:

cp -n /web/cs1511/20T1/activities/note_subtract/note_subtract.c .
Subtracting Notes
When subtracting notes, the resulting octave is the larger octave minus the smaller octave. The resulting key is the key of the larger Note, minus the other key. If the resulting key is negative, you should subtract one from the octave, and add 12 to the key (that is, if you would have octave 3 and key -1, you should actually have octave 2 and key 11).

Testing
note_subtract.c also contains a main function which allows you to test your note_subtract function.
Do not change this main function. If you want to change it, you have misread the question.

Your note_subtract function will be called directly in marking. The main function is only to let you test your note_subtract function

Here is how you use main function allows you to test note_subtract:

dcc -o note_subtract note_subtract.c
./note_subtract
7 4
4 3
3 01
./note_subtract
7 3
4 3
3 00
./note_subtract
7 2
4 3
2 11
Assumptions/Restrictions/Clarifications.
note_subtract should return a Note created with malloc.

note_subtract will be given two arguments, and you are guaranteed that higher will be larger than or equal to lower. You do not need to check this.

note_subtract will be given two arguments, and you are guaranteed that higher and lower will have octaves between 0 and 9, and keys between 0 and 11. You do not need to check this.

note_subtract and print_note should not change the notes they are given. Your functions should not change the octave or key fields of the passed structs.

note_subtract and print_note should not use arrays.

note_subtract should call malloc. print_note should not call malloc or free.

note_subtract and print_note should not call scanf (or getchar or fgets).

note_subtract should not print anything. It should not call printf.

Do not change the supplied main function. It will not be tested or marked.

