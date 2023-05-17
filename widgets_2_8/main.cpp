/*
 * Приложение «Счетчик». Генерация нового сигнала.
 * приложение, которое считает отдельные нажатия на кнопку и серии по пять нажатий.
 */

#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
     QApplication app(argc, argv);
     Win win(0);
     win.show();

     return app.exec();

}
