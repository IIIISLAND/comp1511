Your task is to add code to this function in note_compare.c:

//Returns 1 if a is higher than b
//       -1 if b is higher than a
//        0 if they are equal
int note_compare(Note a, Note b) {
    //TODO: Change this return.
    return -42;

}
note_compare.c uses the following familiar data type, which is similar to the data type you will be using in Assignment 2.
struct note {
    int octave;
    int key;
    struct note *next;
};
It has also been given a typedef, as shown below:

  typedef struct note *Note;
Your task in this exercise is first to complete the function int note_compare(Note a, Note b) so that it returns:

1 if the Note contained in a is higher than the Note in b
-1 if the Note contained in b is higher than the Note in a
0 if the two Notes are the same
Comparing Notes
To compare two Notes, you should first compare their octaves. A higher note will have a larger octave number. If the two octave numbers are the same, the higher Note will have a larger key number.

For example, A Note with octave 3, and key 6 is higher than a Note with octave 2 and key 8, and higher than a Note with octave 3 and key 1; but lower than a Note with octave 3 and key 9, and lower than a Note with octave 4 and key 1.

Testing
note_compare.c also contains a main function which allows you to test your note_compare function.
Do not change this main function. If you want to change it, you have misread the question.

Your note_compare function will be called directly in marking. The main function is only to let you test your note_compare function

Here is how you use main function allows you to test note_compare:

dcc -o note_compare note_compare.c
./note_compare
3 4
4 4
b is higher than a
./note_compare
3 6
3 4
a is higher than b
Assumptions/Restrictions/Clarifications.
note_compare should return only 1, 0, or -1.
note_compare should not change the notes it is given. Your function should not change the octave or key fields of the passed structs.

note_compare should not use arrays.

note_compare should not call malloc.

note_compare should not call scanf (or getchar or fgets).

note_compare should not print anything. It should not call printf.

Do not change the supplied main function. It will not be tested or marked.