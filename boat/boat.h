
// Opérations sur le plateau
#ifndef BATTLECHIP2025_BOARD_H
#define BATTLECHIP2025_BOARD_H

#define GRID_SIZE 10
#define EMPTY 0
#define SHIP  1

typedef struct Position {
    int x;
    int y;
} Position;

typedef enum BoatOrientation {
    BOAT_HORIZONTAL,
    BOAT_VERTICAL
} BoatOrientation;

typedef struct Emplacement {
    Position position;
    int hit;
    int sunk;
}Emplacement;

typedef struct Boat {
    Position position;
    int length;
    int orientation;
    Emplacement* emplacement;
} Boat;

int place_boat(int board[GRID_SIZE][GRID_SIZE], Boat *boat);

int position_boat(Position x, Position y);

int orientation_boat(BoatOrientation H, BoatOrientation V);

#endif //BATTLECHIP2025_BOARD_H


