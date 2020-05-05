// A demo of structs, strings, and other C constructs

// Bender Fight pits four elemental benders against
// one strong enemy and simulates a fight between them

// Marc Chee (cs1511@cse.unsw.edu.au), 26/3/2020

#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 100
#define TEAM_SIZE 4

struct bender {
    char name[MAX_LENGTH];
    char element[MAX_LENGTH];
    int power;
    int health;
};

void attack(struct bender *attacker, struct bender *target);
int stillAlive(struct bender *solo, struct bender team[TEAM_SIZE]);

int main(void) {
    struct bender companions[TEAM_SIZE];
    // Aang
    strcpy(companions[0].name, "Aang");
    strcpy(companions[0].element, "Air");
    companions[0].power = 10;
    companions[0].health = 5;
    // Katara
    strcpy(companions[1].name, "Katara");
    strcpy(companions[1].element, "Water");
    companions[1].power = 7;
    companions[1].health = 7;
    // Sokka
    strcpy(companions[2].name, "Sokka");
    strcpy(companions[2].element, "None");
    companions[2].power = 2;
    companions[2].health = 10;
    // Toph
    strcpy(companions[3].name, "Toph");
    strcpy(companions[3].element, "Earth");
    companions[3].power = 6;
    companions[3].health = 8;
    
    // Enemy! Prince Zuko
    struct bender zuko;
    strcpy(zuko.name, "Prince Zuko");
    strcpy(zuko.element, "Fire");
    zuko.power = 20;
    zuko.health = 20;
 
    // Main fight loop
    int current_companion = 0;
    while (stillAlive(&zuko, companions)) {

        // a single attack action
        attack(&zuko, &companions[current_companion]);
        attack(&companions[current_companion], &zuko);
        
        // switch to the next companion if the current
        // is knocked out
        if (companions[current_companion].health <= 0) { // KO!
            current_companion++;
        }        
    } 
 
    
}

// A single bender attack.
// The target's health will be reduced by the attacker's power
void attack(struct bender *attacker, struct bender *target) {
    printf(
        "%s attacks %s for %d damage.\n",
        attacker->name, 
        target->name, 
        attacker->power
    );
    
    target->health -= attacker->power;
    if (target->health <= 0) { // target is knocked out
        printf("%s has been knocked out.\n", target->name);
    }
}

// Are there combatants on both sides still able to fight?
// return 1 if yes, 0 if no
int stillAlive(struct bender *solo, struct bender team[TEAM_SIZE]) {
    // check solo bender
    int sAlive = 1;
    if (solo->health <= 0) { // solo has been knocked out
        sAlive = 0;
    }
    
    // check that any of the team is still fighting
    int tAlive = 0;
    int i = 0;
    while (i < TEAM_SIZE) { // have checked i team members
        if (team[i].health > 0) { // team member still has health
            tAlive = 1;
        }
        i++;
    }
    return sAlive && tAlive;
}

