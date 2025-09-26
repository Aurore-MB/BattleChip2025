#include "boat.h"

// Fonction pour placer un bateau
int place_boat(int board[GRID_SIZE][GRID_SIZE], Boat *boat) {
    // Cas horizontal
    if (boat->orientation == 0) {
        if (boat->position.x + boat->length > GRID_SIZE) {
            return 0; // dépasse la grille
        }
        for (int j = 0; j < boat->length; j++) {
            if (board[boat->position.y][boat->position.x + j] != EMPTY) {
                return 0; // chevauchement
            }
        }
        for (int j = 0; j < boat->length; j++) {
            board[boat->position.y][boat->position.x + j] = SHIP;
        }
    }
    // Cas vertical
    else if (boat->orientation == 1) {
        if (boat->position.y + boat->length > GRID_SIZE) {
            return 0; // dépasse la grille
        }
        for (int i = 0; i < boat->length; i++) {
            if (board[boat->position.y + i][boat->position.x] != EMPTY) {
                return 0; // chevauchement
            }
        }
        for (int i = 0; i < boat->length; i++) {
            board[boat->position.y + i][boat->position.x] = SHIP;
        }
    }
    else {
        return 0; // orientation invalide
    }

    return 1; // succès
}
