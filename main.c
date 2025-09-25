#include <stdio.h>
#include <stdlib.h>
#include "board/board.h"
#include "display/display.h"
//#define taillePlateau 10
#define nbBoat 5
#include "boat/boat.h"

typedef struct Position {
    int x;
    int y;
}Position;

typedef enum BoatOrientation {
    BOAT_HORIZONTAL,
    BOAT_VERTICAL
}BoatOrientation;

typedef struct Boat {
    Position position;
    int length;
    int orientation; //0 = horizon 1 = vertical
    int hit;
    int sunk;
}Boat;

int main(void)
{
    Boat *tabPosBoat = malloc(sizeof(Boat)*nbBoat);
go,gozgozgo
    tabPosBoat[0].position.x = 10;
    tabPosBoat[0].position.y = 10;
    tabPosBoat[0].orientation = 0;
    tabPosBoat[1].position.x = 12;
    tabPosBoat[1].position.y = 20;
    tabPosBoat[1].orientation = 1;
    tabPosBoat[2].position.x = 3;
    tabPosBoat[2].position.y = 8;
    //createBoard(3, 0, 3, 2);

    for (int i = 0; i < 3; i++) {
        printf("boat n %d x:%d y:%d\n", i, tabPosBoat[i].position.x, tabPosBoat[i].position.y);
    }


    //char **board = createBoard();
    //printBoard(board);

    /*for (int i = 0; i < nbBoat; i++) {
        free(tabPosBoat[i]);
    }*/
    free(tabPosBoat);
    //free(board);
    return 0;
}
