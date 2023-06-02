#include "QTButtonEvent.h"
#include <QtWidgets/QApplication>
#include <QPushbutton.h>

int main(int argc, char* argv[])
{
    QApplication a(argc, argv);
    QTButtonEvent QTB;
    //QTB.show();
    QTB.show();
    return a.exec();
}