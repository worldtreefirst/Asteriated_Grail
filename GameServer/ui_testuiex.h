/********************************************************************************
** Form generated from reading UI file 'testuiex.ui'
**
** Created: Wed Feb 13 13:01:23 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TESTUIEX_H
#define UI_TESTUIEX_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TestUIex
{
public:
    QTextBrowser *inforDisplay;

    void setupUi(QWidget *TestUIex)
    {
        if (TestUIex->objectName().isEmpty())
            TestUIex->setObjectName(QString::fromUtf8("TestUIex"));
        TestUIex->resize(472, 350);
        inforDisplay = new QTextBrowser(TestUIex);
        inforDisplay->setObjectName(QString::fromUtf8("inforDisplay"));
        inforDisplay->setGeometry(QRect(20, 10, 281, 281));

        retranslateUi(TestUIex);

        QMetaObject::connectSlotsByName(TestUIex);
    } // setupUi

    void retranslateUi(QWidget *TestUIex)
    {
        TestUIex->setWindowTitle(QApplication::translate("TestUIex", "Form"));
    } // retranslateUi

};

namespace Ui {
    class TestUIex: public Ui_TestUIex {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TESTUIEX_H
