#include "Game.h"

#include <random>
#include <algorithm>

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
    random_device rd;
    mt19937 rng(rd());
    shuffle(deck.begin(), deck.end(), rng);
}

void Game::endGame() {
    deck.clear();
}

void Game::restart() {
    for (Player p : players) {
    }
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
    random_device rd;
    mt19937 rng(rd());
    shuffle(deck.begin(), deck.end(), rng);
}

Stone* Game::draw() {
    if (deck.size() <= 0) {
         return nullptr;
    }
    Stone* s = new Stone(deck.front().getNum(), deck.front().getType());
    deck.erase(deck.begin());
    return s;
}