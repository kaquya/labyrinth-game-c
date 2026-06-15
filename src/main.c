#include <stdio.h>

#define ROWS 10
#define COLS 10

#define EMPTY '.'

typedef struct {
    int row;
    int col;
} Position;

/*
 * Fills the labyrinth with empty fields.
 * This creates the base board before objects are placed.
 */
void initializeLabyrinth(char labyrinth[ROWS][COLS]) {
    for (int row = 0; row < ROWS; row++) {
        for (int col = 0; col < COLS; col++) {
            labyrinth[row][col] = EMPTY;
        }
    }
}

/*
 * Prints the current labyrinth to the console.
 * This function only handles output, not game logic.
 */
void printLabyrinth(char labyrinth[ROWS][COLS]) {
    printf("\n");

    for (int row = 0; row < ROWS; row++) {
        for (int col = 0; col < COLS; col++) {
            printf("%c ", labyrinth[row][col]);
        }
        printf("\n");
    }

    printf("\n");
}

/*
 * Program entry point.
 * Creates the labyrinth and displays the first empty board.
 */
int main(void) {
    char labyrinth[ROWS][COLS];

    initializeLabyrinth(labyrinth);

    printf("Labyrinth-Spiel\n");
    printLabyrinth(labyrinth);

    return 0;
}
