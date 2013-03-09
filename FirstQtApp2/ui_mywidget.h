/********************************************************************************
** Form generated from reading UI file 'mywidget.ui'
**
** Created: Wed 25. Jul 21:49:01 2012
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYWIDGET_H
#define UI_MYWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QHeaderView>
#include <QtGui/QLCDNumber>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSlider>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MyWidget
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton;
    QPushButton *ProcessBtn;
    QPushButton *MsgShowBoxBtn;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *SubNameTxt;
    QLineEdit *FirstNameTxt;
    QSlider *horizontalSlider;
    QLCDNumber *lcdNumber;
    QLabel *TitleLabel;
    QFrame *line;

    void setupUi(QWidget *MyWidget)
    {
        if (MyWidget->objectName().isEmpty())
            MyWidget->setObjectName(QString::fromUtf8("MyWidget"));
        MyWidget->resize(400, 300);
        verticalLayoutWidget = new QWidget(MyWidget);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(20, 190, 361, 101));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(verticalLayoutWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        verticalLayout->addWidget(pushButton);

        ProcessBtn = new QPushButton(verticalLayoutWidget);
        ProcessBtn->setObjectName(QString::fromUtf8("ProcessBtn"));

        verticalLayout->addWidget(ProcessBtn);

        MsgShowBoxBtn = new QPushButton(verticalLayoutWidget);
        MsgShowBoxBtn->setObjectName(QString::fromUtf8("MsgShowBoxBtn"));

        verticalLayout->addWidget(MsgShowBoxBtn);

        verticalLayoutWidget_2 = new QWidget(MyWidget);
        verticalLayoutWidget_2->setObjectName(QString::fromUtf8("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(20, 100, 361, 80));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        SubNameTxt = new QLineEdit(verticalLayoutWidget_2);
        SubNameTxt->setObjectName(QString::fromUtf8("SubNameTxt"));

        verticalLayout_2->addWidget(SubNameTxt);

        FirstNameTxt = new QLineEdit(verticalLayoutWidget_2);
        FirstNameTxt->setObjectName(QString::fromUtf8("FirstNameTxt"));

        verticalLayout_2->addWidget(FirstNameTxt);

        horizontalSlider = new QSlider(MyWidget);
        horizontalSlider->setObjectName(QString::fromUtf8("horizontalSlider"));
        horizontalSlider->setGeometry(QRect(150, 40, 160, 16));
        horizontalSlider->setOrientation(Qt::Horizontal);
        lcdNumber = new QLCDNumber(MyWidget);
        lcdNumber->setObjectName(QString::fromUtf8("lcdNumber"));
        lcdNumber->setGeometry(QRect(60, 40, 64, 23));
        QFont font;
        font.setFamily(QString::fromUtf8("Calisto MT"));
        font.setBold(true);
        font.setWeight(75);
        lcdNumber->setFont(font);
        TitleLabel = new QLabel(MyWidget);
        TitleLabel->setObjectName(QString::fromUtf8("TitleLabel"));
        TitleLabel->setGeometry(QRect(110, 10, 221, 16));
        line = new QFrame(MyWidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(50, 30, 299, 3));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        retranslateUi(MyWidget);
        QObject::connect(pushButton, SIGNAL(clicked()), FirstNameTxt, SLOT(clear()));
        QObject::connect(horizontalSlider, SIGNAL(valueChanged(int)), lcdNumber, SLOT(display(int)));

        QMetaObject::connectSlotsByName(MyWidget);
    } // setupUi

    void retranslateUi(QWidget *MyWidget)
    {
        MyWidget->setWindowTitle(QApplication::translate("MyWidget", "MyWidget", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("MyWidget", "PushButton", 0, QApplication::UnicodeUTF8));
        ProcessBtn->setText(QApplication::translate("MyWidget", "To Start!", 0, QApplication::UnicodeUTF8));
        MsgShowBoxBtn->setText(QApplication::translate("MyWidget", "Show Message with text from boxes!", 0, QApplication::UnicodeUTF8));
        TitleLabel->setText(QApplication::translate("MyWidget", "Hello to Simple QT Application", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MyWidget: public Ui_MyWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYWIDGET_H
