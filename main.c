#include <stdio.h>
#include <stdlib.h>
#include "board/board.h"
#include "display/display.h"
//#define taillePlateau 10
#define nbBoat 5
#include "boat/boat.h"


int main(void)
{
    Boat *tabPosBoat = malloc(sizeof(Boat)*nbBoat);
    tabPosBoat[0].position.x = 1;
    tabPosBoat[0].position.y = 1;
    tabPosBoat[0].orientation = 0;
    tabPosBoat[1].position.x = 12;
    tabPosBoat[1].position.y = 20;
    tabPosBoat[1].orientation = 1;
    tabPosBoat[2].position.x = 3;
    tabPosBoat[2].position.y = 8;

    tabPosBoat[0].length = 2;
    tabPosBoat[1].length = 3;
    tabPosBoat[2].length = 4;
    tabPosBoat[3].length = 5;
    tabPosBoat[4].length =6;





    char **board = createBoard();
    printBoard(board);

    for (int i = 0; i < nbBoat; i++) {
        tabPosBoat[i].emplacement = malloc(sizeof(Emplacement) * tabPosBoat[i].length);
    }
    //createBoard(3, 0, 3, 2);

    for (int i = 0; i < 3; i++) {
        printf("boat n %d x:%d y:%d\n", i, tabPosBoat[i].position.x, tabPosBoat[i].position.y);
    }



    if(hitOrMiss(1, 1, board, tabPosBoat, 3)) {
        printf("Ca marche comme une poule\n");//DEBUG
    }
    printBoard(board);

    /*for (int i = 0; i < nbBoat; i++) {
        free(tabPosBoat[i]);
    }*/
    free(tabPosBoat);
    //free(board);
    return 0;
}
