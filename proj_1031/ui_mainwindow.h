/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLineEdit *Testdata_1;
    QLineEdit *Submitdata_1;
    QLineEdit *Spendtime_1;
    QLineEdit *Correct_1;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLineEdit *Submitdata_2;
    QLabel *label_10;
    QLineEdit *Correct_2;
    QLineEdit *Testdata_2;
    QLineEdit *Spendtime_2;
    QPushButton *RunButton;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1089, 573);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(70, 50, 47, 12));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(580, 50, 47, 12));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(30, 100, 47, 12));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(30, 130, 71, 16));
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(30, 170, 71, 16));
        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(30, 210, 71, 16));
        Testdata_1 = new QLineEdit(centralWidget);
        Testdata_1->setObjectName(QString::fromUtf8("Testdata_1"));
        Testdata_1->setGeometry(QRect(150, 90, 321, 20));
        Testdata_1->setReadOnly(true);
        Submitdata_1 = new QLineEdit(centralWidget);
        Submitdata_1->setObjectName(QString::fromUtf8("Submitdata_1"));
        Submitdata_1->setGeometry(QRect(150, 130, 321, 20));
        Submitdata_1->setReadOnly(true);
        Spendtime_1 = new QLineEdit(centralWidget);
        Spendtime_1->setObjectName(QString::fromUtf8("Spendtime_1"));
        Spendtime_1->setGeometry(QRect(150, 170, 321, 20));
        Spendtime_1->setReadOnly(true);
        Correct_1 = new QLineEdit(centralWidget);
        Correct_1->setObjectName(QString::fromUtf8("Correct_1"));
        Correct_1->setGeometry(QRect(150, 210, 321, 20));
        Correct_1->setReadOnly(true);
        label_7 = new QLabel(centralWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(570, 130, 71, 16));
        label_8 = new QLabel(centralWidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(570, 170, 71, 16));
        label_9 = new QLabel(centralWidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(570, 210, 71, 16));
        Submitdata_2 = new QLineEdit(centralWidget);
        Submitdata_2->setObjectName(QString::fromUtf8("Submitdata_2"));
        Submitdata_2->setGeometry(QRect(690, 130, 321, 20));
        Submitdata_2->setReadOnly(true);
        label_10 = new QLabel(centralWidget);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(570, 100, 47, 12));
        Correct_2 = new QLineEdit(centralWidget);
        Correct_2->setObjectName(QString::fromUtf8("Correct_2"));
        Correct_2->setGeometry(QRect(690, 210, 321, 20));
        Correct_2->setReadOnly(true);
        Testdata_2 = new QLineEdit(centralWidget);
        Testdata_2->setObjectName(QString::fromUtf8("Testdata_2"));
        Testdata_2->setGeometry(QRect(690, 90, 321, 20));
        Testdata_2->setReadOnly(true);
        Spendtime_2 = new QLineEdit(centralWidget);
        Spendtime_2->setObjectName(QString::fromUtf8("Spendtime_2"));
        Spendtime_2->setGeometry(QRect(690, 170, 321, 20));
        Spendtime_2->setReadOnly(true);
        RunButton = new QPushButton(centralWidget);
        RunButton->setObjectName(QString::fromUtf8("RunButton"));
        RunButton->setGeometry(QRect(470, 300, 75, 23));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1089, 21));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "1.", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "2.", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Testdata", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Submitdata", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Spend time", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Correct or not", nullptr));
        Testdata_1->setInputMask(QString());
        Submitdata_1->setInputMask(QString());
        Spendtime_1->setInputMask(QString());
        Correct_1->setInputMask(QString());
        label_7->setText(QCoreApplication::translate("MainWindow", "Submitdata", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "Spend time", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "Correct or not", nullptr));
        Submitdata_2->setInputMask(QString());
        label_10->setText(QCoreApplication::translate("MainWindow", "Testdata", nullptr));
        Correct_2->setInputMask(QString());
        Testdata_2->setInputMask(QString());
        Spendtime_2->setInputMask(QString());
        RunButton->setText(QCoreApplication::translate("MainWindow", "Run", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
