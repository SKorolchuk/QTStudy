/********************************************************************************
** Form generated from reading UI file 'practiseapp.ui'
**
** Created: Tue Aug 28 22:56:06 2012
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRACTISEAPP_H
#define UI_PRACTISEAPP_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PractiseApp
{
public:
    QAction *actionOpen;
    QAction *actionExit;
    QWidget *centralWidget;
    QMenuBar *menuBar;
    QMenu *menuMenu;
    QMenu *menuAbout;
    QToolBar *mainToolBar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *PractiseApp)
    {
        if (PractiseApp->objectName().isEmpty())
            PractiseApp->setObjectName(QString::fromUtf8("PractiseApp"));
        PractiseApp->resize(611, 406);
        actionOpen = new QAction(PractiseApp);
        actionOpen->setObjectName(QString::fromUtf8("actionOpen"));
        actionExit = new QAction(PractiseApp);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        centralWidget = new QWidget(PractiseApp);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        PractiseApp->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(PractiseApp);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 611, 21));
        menuMenu = new QMenu(menuBar);
        menuMenu->setObjectName(QString::fromUtf8("menuMenu"));
        menuAbout = new QMenu(menuBar);
        menuAbout->setObjectName(QString::fromUtf8("menuAbout"));
        PractiseApp->setMenuBar(menuBar);
        mainToolBar = new QToolBar(PractiseApp);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        PractiseApp->addToolBar(Qt::TopToolBarArea, mainToolBar);
        toolBar = new QToolBar(PractiseApp);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        PractiseApp->addToolBar(Qt::TopToolBarArea, toolBar);

        menuBar->addAction(menuMenu->menuAction());
        menuBar->addAction(menuAbout->menuAction());
        menuMenu->addAction(actionOpen);
        menuMenu->addSeparator();
        menuMenu->addAction(actionExit);

        retranslateUi(PractiseApp);
        QObject::connect(actionExit, SIGNAL(activated()), PractiseApp, SLOT(close()));

        QMetaObject::connectSlotsByName(PractiseApp);
    } // setupUi

    void retranslateUi(QMainWindow *PractiseApp)
    {
        PractiseApp->setWindowTitle(QApplication::translate("PractiseApp", "PractiseApp", 0, QApplication::UnicodeUTF8));
        actionOpen->setText(QApplication::translate("PractiseApp", "Open", 0, QApplication::UnicodeUTF8));
        actionExit->setText(QApplication::translate("PractiseApp", "Exit", 0, QApplication::UnicodeUTF8));
        menuMenu->setTitle(QApplication::translate("PractiseApp", "Menu", 0, QApplication::UnicodeUTF8));
        menuAbout->setTitle(QApplication::translate("PractiseApp", "About", 0, QApplication::UnicodeUTF8));
        toolBar->setWindowTitle(QApplication::translate("PractiseApp", "toolBar", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class PractiseApp: public Ui_PractiseApp {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRACTISEAPP_H
