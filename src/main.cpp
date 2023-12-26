#include "MJA_Qt.h"

#include <QApplication>
#pragma comment(lib, "user32.lib")

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MJA_Qt w;
    w.show();
    return a.exec();
}