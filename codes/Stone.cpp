#include "Stone.h"

Stone::Stone(int n, MJType t) {num = n; type = t;}
int Stone::getNum() {return num;}
MJType Stone::getType() {return type;}
bool Stone::isValid() {
    if (num <= 0 || num > 9) {
        return false;
    } else if (type == MJType::Unknown) {
        return false;
    } else if (type == MJType::Zi) {
        return (num <= 7);
    } else {
        return true;
    }
}

bool Stone::isPair(Stone other) {
    if (type == other.getType() && num == other.getNum()) {
        return true;
    } else {
        return false;
    }
}

bool Stone::isMenzi(Stone other) {
    if (type != other.getType()) {
        return false;
    } else if (type == MJType::Unknown) {
        return false;
    } else if (type == MJType::Zi) {
        return isPair(other);
    } else {
        int lb = num - 2;
        int ub = num + 2;
        if (lb < 1) { lb = 1; }
        if (ub > 9) { ub = 9; }
        return (other.getNum() >= lb && other.getNum() <= ub);
    }
}