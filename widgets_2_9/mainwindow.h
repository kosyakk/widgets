#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "area.h"

class Window : public QWidget
{
public:
    Window();

protected:
     Area * area; // область отображения рисунка
     QPushButton * btn;
};


#endif // MAINWINDOW_H
