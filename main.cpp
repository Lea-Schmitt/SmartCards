#include "smartcards.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    SmartCards w;
    w.show();

    return a.exec();
}
