Your task is to add code to this function in musical_chairs.c:

// Make music for a certain number of turns.
// Each turn of music makes the players move
// one chair along the list.
// After they've moved that many times, the
// first chair in the list is removed, along
// with the person sitting in it.
struct chair *make_music(int turns, struct chair *chairs) {
    // IMPLEMENT THIS FUNCTION
    return chairs;
}
Welcome to the Game of Chairs, where you either win or have your memory freed.

musical_chairs is written using the following structs that cannot be changed:

// player in the game of chairs
struct player {
    char name[MAX_NAME_LENGTH];
};

// A node in a linked list of chairs
struct chair {
    struct player *sitting;
    struct chair *next;
};
The chair struct is a linked list node.

The player struct represents a player that can sit on a chair (represented by the chair's pointer aiming at the player).

make_music is given a pointer to a chair, which is the first element in a list of chairs. It is also given an int turns which represents how many turns of movement there will be before the music stops.

Like the game of Musical Chairs, this program will have players move along the linked list, changing which chair they're sitting in.

In make_music, every player moves turns spaces along the linked list. Anyone who moves off the end of the linked list, should then move to the head of the list, so the players will end up rotating through the list as if it's a loop. This would be similar to if the next of the last chair was aimed at the first chair.

Once all the players have finished moving, the head of the list of chairs is removed. This means both that chair and the player sitting in it are removed from the game.

make_music should then print out the name of the player that was removed.

Be careful to make sure you free all memory used in this game!

For example if a list of chairs called thrones looks like this:

throne points at the player named "Spoiler Alert"
throne points at the player named "Eddard Stark"
throne points at the player named "Joffrey Baratheon"
throne points at the player named "Cersei Lannister"
throne points at the player named "Robert Baratheon"
Then the following function is called:

make_music(3, thrones);
The output would be:

Joffrey Baratheon
and the resulting linked list would look like this:

(throne pointed at "Joffrey Baratheon" but was removed)
throne points at the player named "Cersei Lannister"
throne points at the player named "Robert Baratheon"
throne points at the player named "Spoiler Alert"
throne points at the player named "Eddard Stark"
In this list, all the players have moved down 3 chairs and are now sitting in different chairs. Anyone that moved past the end of the chairs was moved back to the top of the list of chairs.

Assumptions/Restrictions/Clarifications.
struct player and struct chair cannot be edited. They must be used as they are.

The be_seated function will help you create chairs. It cannot be edited and must be used as it is.

You may not use arrays in this solution. Arrays are not necessary to complete this task.

You must free all memory used in your program. Use dcc --leak-check if you need to check for memory leaks. Autotest will also check your code for leaks Your submitted file may contain a main function. It will not be tested or marked.