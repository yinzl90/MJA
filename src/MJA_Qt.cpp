#include "MJA_Qt.h"

MJA_Qt::MJA_Qt(QWidget* parent)
    : QMainWindow(parent)
    , ui(new Ui_MJA_Qt)
{
    ui->setupUi(this);
}

MJA_Qt::~MJA_Qt()
{
    delete ui; 
}