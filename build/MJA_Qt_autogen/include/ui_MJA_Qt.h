/********************************************************************************
** Form generated from reading UI file 'MJA_Qt.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MJA_QT_H
#define UI_MJA_QT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MJA_Qt
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MJA_Qt)
    {
        if (MJA_Qt->objectName().isEmpty())
            MJA_Qt->setObjectName("MJA_Qt");
        MJA_Qt->resize(800, 600);
        centralwidget = new QWidget(MJA_Qt);
        centralwidget->setObjectName("centralwidget");
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(290, 130, 161, 71));
        MJA_Qt->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MJA_Qt);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 21));
        MJA_Qt->setMenuBar(menubar);
        statusbar = new QStatusBar(MJA_Qt);
        statusbar->setObjectName("statusbar");
        MJA_Qt->setStatusBar(statusbar);

        retranslateUi(MJA_Qt);

        QMetaObject::connectSlotsByName(MJA_Qt);
    } // setupUi

    void retranslateUi(QMainWindow *MJA_Qt)
    {
        MJA_Qt->setWindowTitle(QCoreApplication::translate("MJA_Qt", "MJA_Qt", nullptr));
        pushButton->setText(QCoreApplication::translate("MJA_Qt", "\345\217\221\347\211\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MJA_Qt: public Ui_MJA_Qt {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MJA_QT_H
