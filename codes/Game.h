#pragma once

#include "Stone.h"
#include "Player.h"

#include <vector>

using namespace std;

class Game {
    vector<Stone> deck;
    vector<Player> players;

public:
    Game();
    Stone* draw();
    void endGame();
    void restart();
};