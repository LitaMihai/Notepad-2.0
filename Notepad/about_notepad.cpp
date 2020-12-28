#include "about_notepad.h"
#include "ui_about_notepad.h"

About_Notepad::About_Notepad(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::About_Notepad)
{
    ui->setupUi(this);
}

About_Notepad::~About_Notepad()
{
    delete ui;
}
