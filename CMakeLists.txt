cmake_minimum_required(VERSION 3.29)
project(BattleShip C)

set(CMAKE_C_STANDARD 11)

add_executable(BattleShip main.c
        board/board.h
        board/board.c
        display/display.c
        game/game.h
        game/game.c
        display/display.h
        boat/boat.c
        boat/boat.h)
