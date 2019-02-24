/********************************************************************************
** Form generated from reading UI file 'Hoko.ui'
**
** Created by: Qt User Interface Compiler version 5.12.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HOKO_H
#define UI_HOKO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HokoClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *HokoClass)
    {
        if (HokoClass->objectName().isEmpty())
            HokoClass->setObjectName(QString::fromUtf8("HokoClass"));
        HokoClass->resize(600, 400);
        menuBar = new QMenuBar(HokoClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        HokoClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(HokoClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        HokoClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(HokoClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        HokoClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(HokoClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        HokoClass->setStatusBar(statusBar);

        retranslateUi(HokoClass);

        QMetaObject::connectSlotsByName(HokoClass);
    } // setupUi

    void retranslateUi(QMainWindow *HokoClass)
    {
        HokoClass->setWindowTitle(QApplication::translate("HokoClass", "Hoko", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HokoClass: public Ui_HokoClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HOKO_H
