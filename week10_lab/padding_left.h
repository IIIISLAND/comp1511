Your task is to add code to this function in padding_left.c:

// Given a list of characters, move each character
// along one, putting "pad_character" in the first place,
// and ignoring the last character.
//
// Given the list 'c' 'e' 'l' 'l' 'o'; calling left_pad
// once with pad_character = 'x' results in the list:
// 'x' 'c' 'e' 'l' 'l'. Calling it again with pad_character = 'e'
// results in the list: 'e' 'x' 'c' 'e' 'l'
//
// Note that you can't malloc, or modify the lists' nodes
// You can only move data around the list.
void pad_left(struct character_node *characters, char pad_character) {
    // TODO: COMPLETE THIS FUNCTION
}
padding_left is written using the following structs that cannot be changed:

// A node in a linked list of characters.
struct character_node {
    char data;
    struct character_node *next;
};
The character_node struct holds a character, as part of a linked list of characters.

pad_left is given a pointer to a character_node, which is the first element in a list of characters. It is also given a character to "pad" with.

When you "pad" a character list, you iterate over the list and "push" every character along one. This means that the second character becomes whatever the first character was. The third becomes whatever the second was, and so on. The first character becomes pad_character, and what was previously the last character is "forgotten".

For example if a list of characters called characters looks like this:

abcdef
Then the following function is called:

pad_left(characters, 't');
The list characters would be:

tabcde
Hint: You will need to use multiple temporary character variables to complete this exercise!
Examples
dcc padding_left.c -o padding_left
./padding_left lights
a
alight
m
maligh
>
>malig
>
>>mali

dcc padding_left.c -o padding_left
./padding_left cello
x
xcell
e
excel

Assumptions/Restrictions/Clarifications.
struct character_node cannot be edited. It must be used as is.

The string_to_characters, print_characters, and free_characters functions will help you test and run your program. They cannot be edited and must be used as it is. You should not use them yourself in pad_left

pad_left cannot return a new head, so you cannot add to the head of the list. You should complete this task solely by moving around data - you will not need to malloc yourself.

Your submitted file may contain a main function. It will not be tested or marked.