#ifndef TAB7PLOTDATABASE_H
#define TAB7PLOTDATABASE_H

#include <QWidget>

namespace Ui {
class Tab7PlotDatabase;
}

class Tab7PlotDatabase : public QWidget
{
    Q_OBJECT

public:
    explicit Tab7PlotDatabase(QWidget *parent = nullptr);
    ~Tab7PlotDatabase();

private:
    Ui::Tab7PlotDatabase *ui;
};

#endif // TAB7PLOTDATABASE_H
