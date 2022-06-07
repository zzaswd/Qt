#include "widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    hello = new QLabel("Hello wolrd",this);
    hello->show();
}

Widget::~Widget()
{
}

