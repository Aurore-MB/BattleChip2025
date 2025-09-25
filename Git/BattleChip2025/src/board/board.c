#include <stdio.h>
#include <stdlib.h>
#include "board.h"
#include "../game/game.h"


char **createBoard() {
    //--------------------------Génération du plateau de jeu-----------------------------------
    char **board = calloc(10+1, sizeof(char*)); //+1 pour la place que prend la ligne des lettres
    for (int i = 0; i < 10+1; i++) {
        board[i] = calloc(10*3+1,sizeof(char));//*4 car 1 case prend 4 case, +4 pour les espaces du début
    }

    //-----------------les lettres du début------------------------
    short alphaCount = 0;
    board[0][0] = ' '; board[0][1] = ' '; board[0][2] = ' '; board[0][3] = ' ';
    for (int i = 3; i < 10*3+1; i++) {
        if(i%3==0) {
            board[0][i] = 'A'+alphaCount; //+alphaCount pour afficher i lettre après le A (donc l'alphabet)
            alphaCount++;
        }else {
            board[0][i] = ' ';
        }
        //printf("%c", board[0][i]);  //DEBUG
    }
    //-------les chiffres---------
    for (int i = 1; i < 10; i++) {
        board[i][0] = ' '; board[i][1] = '0'+i; board[i][2] = ' ';
    }
    board[10][0] = '1'; board[10][1] = '0'; board[10][2] = ' ';

    //-----------------les points-------------------
    for (int i = 1; i < 11; i++) {
        for(int j=3; j<10*3+1; j++) {
            if(j%3==0) {
                board[i][j] = '.';
            }else {
                board[i][j] = ' ';
            }
        }

        printf("\n");
    }
    return board;
}




