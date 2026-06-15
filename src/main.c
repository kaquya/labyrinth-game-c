#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>

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
 * Checks whether the target field is inside the labyrinth
 * and not blocked by an obstacle.
 */
int isValidMove(char labyrinth[ROWS][COLS], int newRow, int newCol) {
    if (newRow < 0 || newRow >= ROWS || newCol < 0 || newCol >= COLS) {
        return 0;
    }

    if (labyrinth[newRow][newCol] == OBSTACLE) {
        return 0;
    }

    return 1;
}

/*
 * Moves the player based on the entered command.
 * W moves up, A moves left, S moves down and D moves right.
 */
int movePlayer(char labyrinth[ROWS][COLS], Position *playerPosition, char input) {
    int newRow = playerPosition->row;
    int newCol = playerPosition->col;

    input = toupper(input);

    if (input == 'W') {
        newRow--;
    } else if (input == 'A') {
        newCol--;
    } else if (input == 'S') {
        newRow++;
    } else if (input == 'D') {
        newCol++;
    } else {
        return 0;
    }

    if (!isValidMove(labyrinth, newRow, newCol)) {
        return 0;
    }

    labyrinth[playerPosition->row][playerPosition->col] = EMPTY;

    playerPosition->row = newRow;
    playerPosition->col = newCol;

    labyrinth[playerPosition->row][playerPosition->col] = PLAYER;

    return 1;
}

/*
 * Program entry point.
 * Creates the labyrinth and places all game objects randomly.
 */
int main(void) {
    char labyrinth[ROWS][COLS];
    Position playerPosition;
    Position treasurePosition;
    char input;
    int gameRunning = 1;

    srand(time(NULL));

    initializeLabyrinth(labyrinth);
    placeGameObjects(labyrinth, &playerPosition, &treasurePosition);

    printf("Labyrinth-Spiel\n");
    printf("Steuerung: W = hoch, A = links, S = runter, D = rechts, Q = beenden\n");

    while (gameRunning) {
        printLabyrinth(labyrinth);

        printf("Eingabe: ");
        scanf(" %c", &input);

        input = toupper(input);

        if (input == 'Q') {
            printf("Spiel wurde beendet.\n");
            gameRunning = 0;
        } else {
            int moved = movePlayer(labyrinth, &playerPosition, input);

            if (!moved) {
                printf("Ungueltige Bewegung.\n");
            }
        }
    }

    return 0;
}