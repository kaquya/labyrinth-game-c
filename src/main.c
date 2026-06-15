#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROWS 10
#define COLS 10
#define OBSTACLE_COUNT 10

#define EMPTY '.'
#define PLAYER 'P'
#define TREASURE 'T'
#define OBSTACLE 'O'

typedef struct {
    int row;
    int col;
} Position;

/*
 * Fills the labyrinth with empty fields.
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
 * Returns a random position that is still empty.
 * This prevents player, treasure and obstacles from overlapping.
 */
Position getRandomFreePosition(char labyrinth[ROWS][COLS]) {
    Position position;

    do {
        position.row = rand() % ROWS;
        position.col = rand() % COLS;
    } while (labyrinth[position.row][position.col] != EMPTY);

    return position;
}

/*
 * Places player, treasure and obstacles on random free fields.
 */
void placeGameObjects(char labyrinth[ROWS][COLS], Position *playerPosition, Position *treasurePosition) {
    *playerPosition = getRandomFreePosition(labyrinth);
    labyrinth[playerPosition->row][playerPosition->col] = PLAYER;

    *treasurePosition = getRandomFreePosition(labyrinth);
    labyrinth[treasurePosition->row][treasurePosition->col] = TREASURE;

    for (int i = 0; i < OBSTACLE_COUNT; i++) {
        Position obstaclePosition = getRandomFreePosition(labyrinth);
        labyrinth[obstaclePosition.row][obstaclePosition.col] = OBSTACLE;
    }
}

/*
 * Program entry point.
 * Creates the labyrinth and places all game objects randomly.
 */
int main(void) {
    char labyrinth[ROWS][COLS];
    Position playerPosition;
    Position treasurePosition;

    srand(time(NULL));

    initializeLabyrinth(labyrinth);
    placeGameObjects(labyrinth, &playerPosition, &treasurePosition);

    printf("Labyrinth-Spiel\n");
    printLabyrinth(labyrinth);

    return 0;
}