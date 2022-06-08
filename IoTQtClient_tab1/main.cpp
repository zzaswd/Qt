#include "tab1devicecontrol.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Tab1DeviceControl w;
    w.show();
    return a.exec();
}
