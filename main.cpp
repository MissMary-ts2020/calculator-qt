#include "widget.h"
#include <stdio.h>
#include <QApplication>

int main(int argc, char *argv[])
{
    printf("hello");
    QApplication a(argc, argv);
    Widget w;
    w.show();
    return a.exec();
}
