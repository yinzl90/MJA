#include "Game.h"

#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    vector<string> msg {"Hello123", "C++", "World", "from", "VS Code", "and the C++ extension!"};
    Game g = Game();
    for (const string& word : msg)
    {
        cout << word << " ";
    }
    cout << endl;
    Stone* s = g.draw();
    int j = 1;
    while (s != nullptr) {
        cout << "第" << j++ << "张牌: " << s->getNum() << "" << s->getType() << endl;
        s = g.draw();
    }
}