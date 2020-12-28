/********************************************************************************
** Form generated from reading UI file 'about_notepad.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUT_NOTEPAD_H
#define UI_ABOUT_NOTEPAD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_About_Notepad
{
public:
    QLabel *label;

    void setupUi(QDialog *About_Notepad)
    {
        if (About_Notepad->objectName().isEmpty())
            About_Notepad->setObjectName(QString::fromUtf8("About_Notepad"));
        About_Notepad->resize(400, 300);
        label = new QLabel(About_Notepad);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(70, 70, 281, 111));

        retranslateUi(About_Notepad);

        QMetaObject::connectSlotsByName(About_Notepad);
    } // setupUi

    void retranslateUi(QDialog *About_Notepad)
    {
        About_Notepad->setWindowTitle(QCoreApplication::translate("About_Notepad", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("About_Notepad", "This project was created by Li\310\233\304\203 Mihai Alexandru", nullptr));
    } // retranslateUi

};

namespace Ui {
    class About_Notepad: public Ui_About_Notepad {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUT_NOTEPAD_H
