Your task is to add code to these functions in evolve_pokemon.c:

// Create a pokemon 
struct pokemon *create_pokemon(char name[MAX_NAME_SIZE]) {
    // PUT YOUR CODE HERE (you must change the next line!)
    return NULL;
}
// Link a pokemon to another that it evolves into
void evolve_pokemon(struct pokemon *base, struct pokemon *evolution) {
    // PUT YOUR CODE HERE
}
// Print out the evolution of a pokemon
void print_evolution(struct pokemon *p) {
    // PUT YOUR CODE HERE
}
evolve_pokemon is written using the following struct that cannot be changed:
struct pokemon {
    char name[MAX_NAME_SIZE];
    struct pokemon *evolution;
};
create_pokemon should allocate memory for a pokemon struct, set its name to the input string and return a pointer to it. The evolution pointer should be set to NULL.

evolve_pokemon should take two pointers to pokemon. It should set the second as the evolution of the first.

print_evolution should take a pointer to a pokemon. It should print out the name of the pokemon, then the name of what it evolves to and the name of what that pokemon evolves to until it reaches a pokemon that doesn't evolve into anything else. It should print each name on its own line.

For example if we create two pokemon using the strings "Pikachu" and "Raichu"

struct pokemon *pikachu = create_pokemon("Pikachu");
struct pokemon *raichu = create_pokemon("Raichu");
Then we set pikachu's evolution to be raichu and print the evolution

evolve_pokemon(pikachu, raichu);
print_evolution(pikachu);
The output of this will be:

Pikachu
Raichu
Assumptions/Restrictions/Clarifications.
struct pokemon cannot be edited. It must be used as it is.

create_pokemon should call malloc() to allocate memory.

evolve_pokemon should not print anything. It should not call printf.

print_evolution should continue printing names on separate lines until it reaches a NULL evolution then it will stop.

Your submitted file may contain a main function. It will not be tested or marked.

When you think your program is working you can autotest to run some simple automated tests: