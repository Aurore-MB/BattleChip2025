
#include "boat.h"

#include <stdlib.h>


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

Boat *createBoat(int length, int orientation, int x, int y) {
    Boat *tabBoat= malloc(sizeof(Boat)*6);
    tabBoat->position.x = x;
    tabBoat->position.y = y;
    tabBoat->length = length;
    tabBoat->orientation = orientation;
    tabBoat->hit = 0;
    tabBoat->sunk = 0;
    return tabBoat;
}

//int * tabPosBoat()

/*int hitOrMiss(int posX, int posY, char **board, Boat* boat , int nbBoat) {
    for(int i = 0; i < nbBoat; i++) {
        if(posX==boat->position.x[i] && posY==boat->position.y[i]) {

        }
    }
}*/