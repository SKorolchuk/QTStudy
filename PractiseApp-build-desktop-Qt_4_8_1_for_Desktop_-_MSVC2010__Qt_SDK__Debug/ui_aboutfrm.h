/********************************************************************************
** Form generated from reading UI file 'aboutfrm.ui'
**
** Created: Tue Aug 28 23:02:28 2012
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUTFRM_H
#define UI_ABOUTFRM_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSplitter>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AboutFrm
{
public:
    QSplitter *splitter;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *AboutLabel;
    QLabel *CopyrightLabel;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *OKBtn;
    QPushButton *CancelBtn;

    void setupUi(QWidget *AboutFrm)
    {
        if (AboutFrm->objectName().isEmpty())
            AboutFrm->setObjectName(QString::fromUtf8("AboutFrm"));
        AboutFrm->resize(460, 150);
        splitter = new QSplitter(AboutFrm);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setGeometry(QRect(0, 0, 461, 151));
        splitter->setOrientation(Qt::Vertical);
        verticalLayoutWidget_2 = new QWidget(splitter);
        verticalLayoutWidget_2->setObjectName(QString::fromUtf8("verticalLayoutWidget_2"));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        AboutLabel = new QLabel(verticalLayoutWidget_2);
        AboutLabel->setObjectName(QString::fromUtf8("AboutLabel"));
        AboutLabel->setScaledContents(false);
        AboutLabel->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(AboutLabel);

        CopyrightLabel = new QLabel(verticalLayoutWidget_2);
        CopyrightLabel->setObjectName(QString::fromUtf8("CopyrightLabel"));
        CopyrightLabel->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(CopyrightLabel);

        splitter->addWidget(verticalLayoutWidget_2);
        verticalLayoutWidget = new QWidget(splitter);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        OKBtn = new QPushButton(verticalLayoutWidget);
        OKBtn->setObjectName(QString::fromUtf8("OKBtn"));

        verticalLayout->addWidget(OKBtn);

        CancelBtn = new QPushButton(verticalLayoutWidget);
        CancelBtn->setObjectName(QString::fromUtf8("CancelBtn"));

        verticalLayout->addWidget(CancelBtn);

        splitter->addWidget(verticalLayoutWidget);

        retranslateUi(AboutFrm);

        QMetaObject::connectSlotsByName(AboutFrm);
    } // setupUi

    void retranslateUi(QWidget *AboutFrm)
    {
        AboutFrm->setWindowTitle(QApplication::translate("AboutFrm", "Form", 0, QApplication::UnicodeUTF8));
        AboutLabel->setText(QApplication::translate("AboutFrm", "About", 0, QApplication::UnicodeUTF8));
        CopyrightLabel->setText(QApplication::translate("AboutFrm", "Copyright by Sergey Korolchuk 2012", 0, QApplication::UnicodeUTF8));
        OKBtn->setText(QApplication::translate("AboutFrm", "OK", 0, QApplication::UnicodeUTF8));
        CancelBtn->setText(QApplication::translate("AboutFrm", "Cancel", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class AboutFrm: public Ui_AboutFrm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUTFRM_H
