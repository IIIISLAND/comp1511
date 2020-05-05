#include <stdio.h>
#include <assert.h>

#define MAX_SIZE 100

int largest_z_sum(int size, int array[MAX_SIZE][MAX_SIZE]);

// DO NOT CHANGE THIS MAIN FUNCTION
int main(void) {
    int array[MAX_SIZE][MAX_SIZE];

    // Get the array size.
    int size;
    printf("Enter 2D array side length: ");
    scanf("%d", &size);
    assert(size >= 3);

    // Scan in values for the array.
    printf("Enter 2D array values:\n");
    int i = 0;
    while (i < size) {
        int j = 0;
        while (j < size) {
            assert(scanf("%d", &array[i][j]) == 1);
            j++;
        }
        i++;
    }

    printf("The largest z sum is %d.\n", largest_z_sum(size, array));

    return 0;
}

// Return the largest sum of numbers in a z shape.
int largest_z_sum(int size, int array[MAX_SIZE][MAX_SIZE]) {
    int curr_size = 3;

    // Appropriate initial value for max_sum. Most basic z.
    int max_sum = array[0][0] + array[0][1] + array[0][2]
                              + array[1][1]
                + array[2][0] + array[2][1] + array[2][2];

    while (curr_size <= size) {
        int z_possible_y = 0;
        while (z_possible_y <= size - curr_size) {
            int z_possible_x = 0;
            while (z_possible_x <= size - curr_size) {

                // Consider (z_possible_y, z_possible_x) to be top left corner
                // of candidate z shape of curr_size sidelength.
                
                // Calculate sum of the top row of the z.
                int top_row_sum = 0;
                int i = 0;
                while (i < curr_size - 1) { // -1 to prevent intersection point being double counted.
                    top_row_sum += array[z_possible_y][z_possible_x + i];
                    i++;
                }

                // Calculate the sum of the diagonal.
                int diagonal_sum = 0;
                i = 0;
                while (i < curr_size) {
                    diagonal_sum += array[z_possible_y + i][z_possible_x + (curr_size - 1) - i];
                    i++;
                }


                // Calculate sum of the bottom row.
                int bottom_row_sum = 0;
                i = 1; // 1 initial value to prevent intersection point being double counted.
                while (i < curr_size) {
                    bottom_row_sum += array[z_possible_y + (curr_size - 1)][z_possible_x + i];
                    i++;
                }

                int total_sum = top_row_sum + diagonal_sum + bottom_row_sum;
                if (total_sum > max_sum) {
                    max_sum = total_sum;
                }

                z_possible_x++;
            }

            z_possible_y++;
        }

        curr_size++;
    }
    return max_sum;
}