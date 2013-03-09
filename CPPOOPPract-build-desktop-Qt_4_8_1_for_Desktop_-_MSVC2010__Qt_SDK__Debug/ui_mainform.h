/********************************************************************************
** Form generated from reading UI file 'mainform.ui'
**
** Created: Mon Sep 10 11:28:52 2012
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINFORM_H
#define UI_MAINFORM_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLCDNumber>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QSpinBox>
#include <QtGui/QStatusBar>
#include <QtGui/QTextEdit>
#include <QtGui/QToolBar>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainForm
{
public:
    QAction *actionExit;
    QAction *actionLoad;
    QWidget *centralWidget;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QTextEdit *FileBrowser;
    QSpinBox *spinBox;
    QLCDNumber *lcdNumber;
    QMenuBar *menuBar;
    QMenu *menuMenu;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainForm)
    {
        if (MainForm->objectName().isEmpty())
            MainForm->setObjectName(QString::fromUtf8("MainForm"));
        MainForm->resize(400, 409);
        actionExit = new QAction(MainForm);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        actionLoad = new QAction(MainForm);
        actionLoad->setObjectName(QString::fromUtf8("actionLoad"));
        centralWidget = new QWidget(MainForm);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayoutWidget = new QWidget(centralWidget);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(0, 0, 401, 241));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        FileBrowser = new QTextEdit(verticalLayoutWidget);
        FileBrowser->setObjectName(QString::fromUtf8("FileBrowser"));

        verticalLayout->addWidget(FileBrowser);

        spinBox = new QSpinBox(centralWidget);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));
        spinBox->setGeometry(QRect(90, 270, 42, 22));
        lcdNumber = new QLCDNumber(centralWidget);
        lcdNumber->setObjectName(QString::fromUtf8("lcdNumber"));
        lcdNumber->setGeometry(QRect(190, 280, 64, 23));
        MainForm->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainForm);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 21));
        menuMenu = new QMenu(menuBar);
        menuMenu->setObjectName(QString::fromUtf8("menuMenu"));
        MainForm->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainForm);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainForm->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainForm);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainForm->setStatusBar(statusBar);

        menuBar->addAction(menuMenu->menuAction());
        menuMenu->addAction(actionLoad);
        menuMenu->addSeparator();
        menuMenu->addAction(actionExit);

        retranslateUi(MainForm);
        QObject::connect(actionExit, SIGNAL(activated()), MainForm, SLOT(close()));
        QObject::connect(spinBox, SIGNAL(valueChanged(QString)), lcdNumber, SLOT(display(QString)));

        QMetaObject::connectSlotsByName(MainForm);
    } // setupUi

    void retranslateUi(QMainWindow *MainForm)
    {
        MainForm->setWindowTitle(QApplication::translate("MainForm", "MainForm", 0, QApplication::UnicodeUTF8));
        actionExit->setText(QApplication::translate("MainForm", "Exit", 0, QApplication::UnicodeUTF8));
        actionLoad->setText(QApplication::translate("MainForm", "Load", 0, QApplication::UnicodeUTF8));
        menuMenu->setTitle(QApplication::translate("MainForm", "Menu", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainForm: public Ui_MainForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINFORM_H
