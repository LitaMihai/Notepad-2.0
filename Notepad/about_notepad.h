#ifndef ABOUT_NOTEPAD_H
#define ABOUT_NOTEPAD_H

#include <QDialog>

namespace Ui {
class About_Notepad;
}

class About_Notepad : public QDialog
{
    Q_OBJECT

public:
    explicit About_Notepad(QWidget *parent = nullptr);
    ~About_Notepad();

private:
    Ui::About_Notepad *ui;
};

#endif // ABOUT_NOTEPAD_H
