#include <stdio.h>
#include "display.h"

void printBoard(char** board) {
    for (int i = 0; i < 11; i++) {
        for(int j=0; j<10*3+1; j++) {
            printf("%c", board[i][j]);
        }printf("\n");
    }
}