#include "mainwindow.h"

#include <QApplication>
#include <QPushButton>
#include <QtGui>
#include <QtWidgets>
#include <string>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;

    QPushButton button;
    button.setParent(&w);
    button.move(100, 100);
    w.setWindowTitle("qt demo 01");
    button.resize(200, 200);

    QObject::connect(&button, &QPushButton::clicked, &button, &QPushButton::hide);

    w.setWindowTitle("俊意的程序-0.1");
    w.setWindowIcon(QIcon("..\\data\\icons8-soil-80"));
    w.resize(QApplication::desktop()->width() * 0.5, QApplication::desktop()->height() * 0.5);
    w.move(QApplication::desktop()->width() * 0.05, QApplication::desktop()->height() * 0.01);

    w.show();
    return a.exec();
}
