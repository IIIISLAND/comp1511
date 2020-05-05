//  Reads lines and writes them out with the characters of each line in reverse order.
//  Stop when it reaches the end of input.

#include <stdio.h>

#define MAX_LINE_CHARS 4096

int main(void) {
    char line[MAX_LINE_CHARS];

    // get the lines
    while (fgets(line, MAX_LINE_CHARS, stdin) != NULL) {

        // find the size of this line
        int size = 0;
        while ((line[size] != '\n') && (line[size] != '\0')) {
            // not the end yet
            size = size + 1;
        }

        // now print in reverse
        int j = size - 1;
        while (j >= 0) {
            printf("%c", line[j]);
            j = j - 1;
        }
        printf("\n");
    }

    return 0;
}

// ANOTHER
#include <stdio.h> 
#include <string.h>
#define app 1000

void reverselines(char reverse[app]);

int main(void) { 
    
    char reverse[app];
    while (fgets(reverse, 1000, stdin) != NULL) {
    int length = strlen(reverse);
    reverse[length-1]='\0';
    reverselines(reverse);
    }
return 0; 
}

void reverselines(char reverse[app]) {
    int n= strlen(reverse);
    int i= n-1;
    for (i=n-1;i>=0;i--) {
        printf("%c", reverse[i]);
    }
    printf("\n");
}