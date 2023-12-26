#pragma once
#include "ui_MJA_Qt.h"
#include <QMainWindow>

class MJA_Qt : public QMainWindow {
    Q_OBJECT
    
public:
    MJA_Qt(QWidget* parent = nullptr);
    ~MJA_Qt();

private:
    Ui_MJA_Qt* ui;
};