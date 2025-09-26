#include <stdio.h>
#include <stdlib.h>
#include "board/board.h"
#include "display/display.h"
//#define taillePlateau 10
#define nbBoat 5
#include "boat/boat.h"


int main(void)
{
    int board[GRID_SIZE][GRID_SIZE] = {0};

    // Définition des 5 navires
    Boat porte_avions = { {0, 0}, 5, BOAT_HORIZONTAL, 0, 0 };  // Ligne A, col 1
    Boat croiseur     = { {2, 1}, 4, BOAT_VERTICAL,   0, 0 };  // Ligne B, col 3
    Boat destroyer1   = { {5, 5}, 3, BOAT_HORIZONTAL, 0, 0 };  // Ligne F, col 6
    Boat destroyer2   = { {7, 2}, 3, BOAT_VERTICAL,   0, 0 };  // Ligne C, col 8
    Boat torpilleur   = { {9, 8}, 2, BOAT_HORIZONTAL, 0, 0 };  // Ligne I, col 10

    // Placement
    place_boat(board, &porte_avions);
    place_boat(board, &croiseur);
    place_boat(board, &destroyer1);
    place_boat(board, &destroyer2);
    place_boat(board, &torpilleur);

    // Affichage
    print_board(board);

    /*for (int i = 0; i < 3; i++) {
        printf("boat n %d x:%d y:%d\n", i, tabPosBoat[i].position.x, tabPosBoat[i].position.y);
    }*/


    //char **board = createBoard();
    //printBoard(board);

    /*for (int i = 0; i < nbBoat; i++) {
        free(tabPosBoat[i]);
    }*/
    //free(tabPosBoat);
    //free(board);
    return 0;
}
