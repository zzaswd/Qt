#ifndef TAB1DEVICECONTROL_H
#define TAB1DEVICECONTROL_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class Tab1DeviceControl; }
QT_END_NAMESPACE

class Tab1DeviceControl : public QWidget
{
    Q_OBJECT

public:
    Tab1DeviceControl(QWidget *parent = nullptr);
    ~Tab1DeviceControl();

private:
    Ui::Tab1DeviceControl *ui;
};
#endif // TAB1DEVICECONTROL_H
