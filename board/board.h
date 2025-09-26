#ifndef BOARD_H
#define BOARD_H
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

char **createBoard(); //génération tab2d plateau de jeu
void modifyBoard(char **board, int x, int y, int hitMiss, int numBoat, Boat *boat ); //modifie le plateau et


#endif