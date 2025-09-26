
#include "boat.h"
#include "../board/board.h"
#include <stdio.h>
#include <stdlib.h>



//marche pas pour le moment
/*Boat *createBoat(int length, int orientation, int x, int y) {
    Boat *tabBoat= malloc(sizeof(Boat)*6);
    tabBoat->position.x = x;
    tabBoat->position.y = y;
    tabBoat->length = length;
    tabBoat->orientation = orientation;
    tabBoat->hit = 0;
    tabBoat->sunk = 0;
    return tabBoat;
}*/

//int * tabPosBoat()

int hitOrMiss(int posX, int posY, char **board, Boat* boat , int nbBoat) {
    int i=0;
    for(i; i < nbBoat; i++) {
        if(posX==boat[i].position.x && posY==boat[i].position.y) {
            modifyBoard(board, posX, posY, 1, i, boat);//1 X pour touché, 0 o pour loupé
            printf("GG bro\n");//DEBUG

            return 1;
        }
    }
    modifyBoard(board, posX, posY, 0,i, boat);//1 X pour touché, 0 o pour loupé
    printf("le miss\n");//DEBUG
    return 0;
}