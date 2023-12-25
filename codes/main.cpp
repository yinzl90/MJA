#include <iostream>
#include <vector>
#include <string>
#include "Stone.h"

using namespace std;

int main()
{
    vector<string> msg {"Hello123", "C++", "World", "from", "VS Code", "and the C++ extension!"};
    Stone ow = Stone(1, MJType::Wan);
    Stone tw = Stone(3, MJType::Wan);
    for (const string& word : msg)
    {
        cout << word << " ";
    }
    cout << endl;
}