
#include <QApplication>
#include <QLabel>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QLabel *hello = new QLabel("Hello wolrd",0);
    hello ->show();
    //w.show();
    return a.exec();
}
