#ifndef TAB6DATABASE_H
#define TAB6DATABASE_H

#include <QWidget>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QDebug>
#include <QDateTime>

#include <QChartView> // line chart 예제에서 가져온 헤더파일들.
#include <QLineSeries>

#include <QDateTimeAxis> // x축을 날짜와 시간으로 설정할 수 있도록 하는 헤더파일

#include <QDate> // 현재 날짜와
#include <QTime> // 현재 시간을 받아오기 위한 헤더 파일
QT_CHARTS_USE_NAMESPACE
namespace Ui {
class Tab6Database;
}

class Tab6Database : public QWidget
{
    Q_OBJECT

public:
    explicit Tab6Database(QWidget *parent = nullptr);
    ~Tab6Database();

private:
    Ui::Tab6Database *ui;
    QSqlDatabase sqlDb;
    QLineSeries *pIlluLine;  // 조도값
    QLineSeries *pTemp;  // 조도값
    QLineSeries *pHumi;  // 조도값
    QChart* chart;
    QChartView *chartView;
    QDateTimeAxis* axisX; // x축을 위한 객체 포인터 변수 선언
    QDateTime firstDate;
    QDateTime LastDate;
    int flag;
private slots:
    void slotTab6RecvData(QString);
    void slotSearchDb();
    void slotDeleteDb();
};

#endif // TAB6DATABASE_H
