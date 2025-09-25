#include <stdio.h>
#include <stdlib.h>
#include "board/board.h"
#include "display/display.h"
//#define taillePlateau 10
#define nbBoat 5
#include "boat/boat.h"// Point d'entree du programme

int main(void){
    char **board = createBoard();
    printBoard(board);

    free(tabPosBoat);
    free(board);
    return 0;
}
