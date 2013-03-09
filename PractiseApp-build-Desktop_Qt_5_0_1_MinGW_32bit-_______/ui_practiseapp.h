/********************************************************************************
** Form generated from reading UI file 'practiseapp.ui'
**
** Created by: Qt User Interface Compiler version 5.0.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRACTISEAPP_H
#define UI_PRACTISEAPP_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

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
            PractiseApp->setObjectName(QStringLiteral("PractiseApp"));
        PractiseApp->resize(611, 406);
        actionOpen = new QAction(PractiseApp);
        actionOpen->setObjectName(QStringLiteral("actionOpen"));
        actionExit = new QAction(PractiseApp);
        actionExit->setObjectName(QStringLiteral("actionExit"));
        centralWidget = new QWidget(PractiseApp);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        PractiseApp->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(PractiseApp);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 611, 21));
        menuMenu = new QMenu(menuBar);
        menuMenu->setObjectName(QStringLiteral("menuMenu"));
        menuAbout = new QMenu(menuBar);
        menuAbout->setObjectName(QStringLiteral("menuAbout"));
        PractiseApp->setMenuBar(menuBar);
        mainToolBar = new QToolBar(PractiseApp);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        PractiseApp->addToolBar(Qt::TopToolBarArea, mainToolBar);
        toolBar = new QToolBar(PractiseApp);
        toolBar->setObjectName(QStringLiteral("toolBar"));
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
        PractiseApp->setWindowTitle(QApplication::translate("PractiseApp", "PractiseApp", 0));
        actionOpen->setText(QApplication::translate("PractiseApp", "Open", 0));
        actionExit->setText(QApplication::translate("PractiseApp", "Exit", 0));
        menuMenu->setTitle(QApplication::translate("PractiseApp", "Menu", 0));
        menuAbout->setTitle(QApplication::translate("PractiseApp", "About", 0));
        toolBar->setWindowTitle(QApplication::translate("PractiseApp", "toolBar", 0));
    } // retranslateUi

};

namespace Ui {
    class PractiseApp: public Ui_PractiseApp {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRACTISEAPP_H
