#include <iostream>
#include <vector>
#include <string>
#include "Game.h"

using namespace std;

int main()
{
    vector<string> msg {"Hello123", "C++", "World", "from", "VS Code", "and the C++ extension!"};
    Game g = Game();
    for (const string& word : msg)
    {
        cout << word << " ";
    }
    Stone s = g.draw();
    cout << s.getNum() << s.getType() << endl;
    cout << endl;
}