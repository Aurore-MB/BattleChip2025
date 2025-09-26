#include <stdio.h>
#include "display.h"
//Affichage du tableau sans les beteaux
void printBoard(char** board) {
    for (int i = 0; i < 11; i++) {
        for(int j=0; j<10*3+1; j++) {
            printf("%c", board[i][j]);
        }printf("\n");
    }
}

//Affichage du tableau avec les bateaux;

void print_board(int board[GRID_SIZE][GRID_SIZE]) {
    printf("   ");
    for (int j = 0; j < GRID_SIZE; j++) printf("%2d ", j+1);
    printf("\n");

    for (int i = 0; i < GRID_SIZE; i++) {
        printf("%c  ", 'A' + i);
        for (int j = 0; j < GRID_SIZE; j++) {
            if (board[i][j] == EMPTY) printf(".  ");
            else printf("S  ");
        }
        printf("\n");
    }
}
