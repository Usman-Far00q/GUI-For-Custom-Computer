#include "widget.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Widget w;
    w.setWindowTitle("Simulator For The WAJMAN Computer");
    w.show();

    return a.exec();
}
