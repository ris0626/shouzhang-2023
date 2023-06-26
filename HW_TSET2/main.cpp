#include "mainwindow.h"

#include <QApplication>

#include "open.h"

bool opendatabase();

int main(int argc, char *argv[])
{
    opendatabase();
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
