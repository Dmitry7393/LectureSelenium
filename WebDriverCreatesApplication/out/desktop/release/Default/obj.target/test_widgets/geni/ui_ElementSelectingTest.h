/********************************************************************************
** Form generated from reading UI file 'ElementSelectingTest.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ELEMENTSELECTINGTEST_H
#define UI_ELEMENTSELECTINGTEST_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QRadioButton>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ElementSelectingTestWidget
{
public:
    QWidget *centralWidget;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QCheckBox *checkedchecky;
    QCheckBox *checky;
    QCheckBox *randomly_disabled_checky;
    QCheckBox *disabledchecky;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QRadioButton *nothing;
    QRadioButton *peas;
    QRadioButton *cheese_and_peas;
    QRadioButton *randomly_disabled_nothing;
    QWidget *verticalLayoutWidget_3;
    QVBoxLayout *verticalLayout_3;
    QRadioButton *lone_disabled_selected_radio;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *ElementSelectingTestWidget)
    {
        if (ElementSelectingTestWidget->objectName().isEmpty())
            ElementSelectingTestWidget->setObjectName(QString::fromUtf8("ElementSelectingTestWidget"));
        ElementSelectingTestWidget->resize(557, 327);
        centralWidget = new QWidget(ElementSelectingTestWidget);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayoutWidget = new QWidget(centralWidget);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(10, 10, 212, 124));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        checkedchecky = new QCheckBox(verticalLayoutWidget);
        checkedchecky->setObjectName(QString::fromUtf8("checkedchecky"));
        checkedchecky->setChecked(true);

        verticalLayout->addWidget(checkedchecky);

        checky = new QCheckBox(verticalLayoutWidget);
        checky->setObjectName(QString::fromUtf8("checky"));

        verticalLayout->addWidget(checky);

        randomly_disabled_checky = new QCheckBox(verticalLayoutWidget);
        randomly_disabled_checky->setObjectName(QString::fromUtf8("randomly_disabled_checky"));
        randomly_disabled_checky->setEnabled(false);
        randomly_disabled_checky->setChecked(true);

        verticalLayout->addWidget(randomly_disabled_checky);

        disabledchecky = new QCheckBox(verticalLayoutWidget);
        disabledchecky->setObjectName(QString::fromUtf8("disabledchecky"));
        disabledchecky->setEnabled(false);

        verticalLayout->addWidget(disabledchecky);

        verticalLayoutWidget_2 = new QWidget(centralWidget);
        verticalLayoutWidget_2->setObjectName(QString::fromUtf8("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(10, 130, 160, 92));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        nothing = new QRadioButton(verticalLayoutWidget_2);
        nothing->setObjectName(QString::fromUtf8("nothing"));
        nothing->setEnabled(false);

        verticalLayout_2->addWidget(nothing);

        peas = new QRadioButton(verticalLayoutWidget_2);
        peas->setObjectName(QString::fromUtf8("peas"));

        verticalLayout_2->addWidget(peas);

        cheese_and_peas = new QRadioButton(verticalLayoutWidget_2);
        cheese_and_peas->setObjectName(QString::fromUtf8("cheese_and_peas"));
        cheese_and_peas->setChecked(true);

        verticalLayout_2->addWidget(cheese_and_peas);

        randomly_disabled_nothing = new QRadioButton(centralWidget);
        randomly_disabled_nothing->setObjectName(QString::fromUtf8("randomly_disabled_nothing"));
        randomly_disabled_nothing->setEnabled(false);
        randomly_disabled_nothing->setGeometry(QRect(260, 150, 221, 26));
        randomly_disabled_nothing->setChecked(false);
        verticalLayoutWidget_3 = new QWidget(centralWidget);
        verticalLayoutWidget_3->setObjectName(QString::fromUtf8("verticalLayoutWidget_3"));
        verticalLayoutWidget_3->setGeometry(QRect(250, 10, 232, 80));
        verticalLayout_3 = new QVBoxLayout(verticalLayoutWidget_3);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        lone_disabled_selected_radio = new QRadioButton(verticalLayoutWidget_3);
        lone_disabled_selected_radio->setObjectName(QString::fromUtf8("lone_disabled_selected_radio"));
        lone_disabled_selected_radio->setEnabled(false);
        lone_disabled_selected_radio->setChecked(true);

        verticalLayout_3->addWidget(lone_disabled_selected_radio);

        ElementSelectingTestWidget->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(ElementSelectingTestWidget);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 557, 29));
        ElementSelectingTestWidget->setMenuBar(menuBar);
        mainToolBar = new QToolBar(ElementSelectingTestWidget);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        ElementSelectingTestWidget->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(ElementSelectingTestWidget);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        ElementSelectingTestWidget->setStatusBar(statusBar);

        retranslateUi(ElementSelectingTestWidget);

        QMetaObject::connectSlotsByName(ElementSelectingTestWidget);
    } // setupUi

    void retranslateUi(QMainWindow *ElementSelectingTestWidget)
    {
        ElementSelectingTestWidget->setWindowTitle(QApplication::translate("ElementSelectingTestWidget", "ElementSelectingTest", 0, QApplication::UnicodeUTF8));
        checkedchecky->setText(QApplication::translate("ElementSelectingTestWidget", "checkedchecky", 0, QApplication::UnicodeUTF8));
        checky->setText(QApplication::translate("ElementSelectingTestWidget", "checky", 0, QApplication::UnicodeUTF8));
        randomly_disabled_checky->setText(QApplication::translate("ElementSelectingTestWidget", "randomly_disabled_checky", 0, QApplication::UnicodeUTF8));
        disabledchecky->setText(QApplication::translate("ElementSelectingTestWidget", "disabledchecky", 0, QApplication::UnicodeUTF8));
        nothing->setText(QApplication::translate("ElementSelectingTestWidget", "nothing", 0, QApplication::UnicodeUTF8));
        peas->setText(QApplication::translate("ElementSelectingTestWidget", "peas", 0, QApplication::UnicodeUTF8));
        cheese_and_peas->setText(QApplication::translate("ElementSelectingTestWidget", "cheese_and_peas", 0, QApplication::UnicodeUTF8));
        randomly_disabled_nothing->setText(QApplication::translate("ElementSelectingTestWidget", "randomly_disabled_nothing", 0, QApplication::UnicodeUTF8));
        lone_disabled_selected_radio->setText(QApplication::translate("ElementSelectingTestWidget", "lone_disabled_selected_radio", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ElementSelectingTestWidget: public Ui_ElementSelectingTestWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ELEMENTSELECTINGTEST_H
