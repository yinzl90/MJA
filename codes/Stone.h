#pragma once

enum MJType {
    Unknown,
    Tuo,
    Suo,
    Wan,
    Zi, // 字牌
};

class Stone {
    int num = 0;
    MJType type = MJType::Unknown;

public:
    Stone(int n, MJType t); 
    int getNum();
    MJType getType();
    bool isValid();
    bool isMenzi(Stone other);
    bool isPair(Stone other);
};