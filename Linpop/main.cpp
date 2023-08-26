#include "widget.h"
#include "mylist.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Widget w;
    w.show();
    mylist m;
    m.show();
    return a.exec();

}
