#include "Game.h"

Game::Game() {
    for (int i = 1; i <= 9; i++) {
        deck.push_back(Stone(i, MJType::Wan));
        deck.push_back(Stone(i, MJType::Wan));
        deck.push_back(Stone(i, MJType::Wan));
        deck.push_back(Stone(i, MJType::Wan));

        deck.push_back(Stone(i, MJType::Tuo));
        deck.push_back(Stone(i, MJType::Tuo));
        deck.push_back(Stone(i, MJType::Tuo));
        deck.push_back(Stone(i, MJType::Tuo));

        deck.push_back(Stone(i, MJType::Suo));
        deck.push_back(Stone(i, MJType::Suo));
        deck.push_back(Stone(i, MJType::Suo));
        deck.push_back(Stone(i, MJType::Suo));
    }
}

void Game::endGame() {
    deck.clear();
}

Stone Game::draw() {
    Stone s = deck.front();
    deck.erase(deck.begin());
    return s;
}