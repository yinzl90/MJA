#include "Game.h"

#include <random>
#include <algorithm>
#include <array>

Game::Game() {
    array<MJType, 3> types = {MJType::Tuo, MJType::Suo, MJType::Wan};
    for (int i = 1; i <= 9; i++) {
        for (const auto& type : types) {
            for (int j = 0; j < 4; j++) {
                deck.push_back(Stone(i, type));
            }
        }
    }
    // shuffle deck
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
    array<MJType, 3> types = {MJType::Tuo, MJType::Suo, MJType::Wan};
    for (int i = 1; i <= 9; i++) {
        for (const auto& type : types) {
            for (int j = 0; j < 4; j++) {
                deck.push_back(Stone(i, type));
            }
        }
    }
    // shuffle deck
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