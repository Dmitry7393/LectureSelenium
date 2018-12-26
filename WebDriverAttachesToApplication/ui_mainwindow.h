/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLineEdit *m_LineEditForNumber;
    QPushButton *m_BtnCalculate;
    QLabel *label;
    QLabel *label_2;
    QLabel *m_ResultSqrt;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(469, 374);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        m_LineEditForNumber = new QLineEdit(centralWidget);
        m_LineEditForNumber->setObjectName(QString::fromUtf8("m_LineEditForNumber"));
        m_LineEditForNumber->setGeometry(QRect(120, 110, 211, 31));
        m_BtnCalculate = new QPushButton(centralWidget);
        m_BtnCalculate->setObjectName(QString::fromUtf8("m_BtnCalculate"));
        m_BtnCalculate->setGeometry(QRect(120, 160, 211, 41));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(120, 70, 141, 21));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(120, 220, 67, 17));
        m_ResultSqrt = new QLabel(centralWidget);
        m_ResultSqrt->setObjectName(QString::fromUtf8("m_ResultSqrt"));
        m_ResultSqrt->setGeometry(QRect(210, 220, 31, 17));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 469, 25));
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
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0, QApplication::UnicodeUTF8));
        m_BtnCalculate->setText(QApplication::translate("MainWindow", "\320\241alculate the square root", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("MainWindow", "Enter the value", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("MainWindow", "Result:", 0, QApplication::UnicodeUTF8));
        m_ResultSqrt->setText(QApplication::translate("MainWindow", "0", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
