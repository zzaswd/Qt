#ifndef __CUSTOM_WIDGET__
#define __CUSTOM_WIDGET__

#include <QWidget>

class CustomWidget : public QWidget {
    Q_OBJECT
  public:
      CustomWidget(QWidget *parent = 0);
  signals:
      void widgetClicked();
  public slots:   //p667
      void processClick(); // slot function
};

#endif // __CUSTOM_WIDGET__
