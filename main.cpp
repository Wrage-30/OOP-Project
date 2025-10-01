#include "game.h"

int main() {
    game g;
    g.run();
    return 0;
}

//
// clang++ -std=c++17 main.cpp -o sfml-app \
//  -I/usr/local/Cellar/sfml/ \
//  -L/usr/local/Cellar/sfml/ \
//  -lsfml-graphics -lsfml-window -lsfml-system
 //