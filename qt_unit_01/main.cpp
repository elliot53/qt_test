#include "mainwindow.h"

#include <QApplication>
#include <QPushButton>

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

    w.show();
    return a.exec();
}
