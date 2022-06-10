#ifndef TAB5CHARTPLOT_H
#define TAB5CHARTPLOT_H

#include <QWidget>

#include <QChartView> // line chart 예제에서 가져온 헤더파일들.
#include <QLineSeries>

#include <QDateTimeAxis> // x축을 날짜와 시간으로 설정할 수 있도록 하는 헤더파일

#include <QDate> // 현재 날짜와
#include <QTime> // 현재 시간을 받아오기 위한 헤더 파일

#include <QDateTime> // 표의 x축 Range를 정하기 위해 사용하는 헤더 파일
#include <QDebug>
QT_CHARTS_USE_NAMESPACE

namespace Ui {
class Tab5ChartPlot;
}

class Tab5ChartPlot : public QWidget
{
    Q_OBJECT

public:
    explicit Tab5ChartPlot(QWidget *parent = nullptr);
    ~Tab5ChartPlot();

private:
    Ui::Tab5ChartPlot *ui;
    QLineSeries *pIlluLine;  // 조도값
    QLineSeries *pTemp;  // 조도값
    QLineSeries *pHumi;  // 조도값
    QChart* chart;
    QChartView *chartView;
    QDateTimeAxis* axisX; // x축을 위한 객체 포인터 변수 선언
    QDateTime firstDate;
    QDateTime LastDate;

private slots:
    void slotAddPoint();
    void slotClearPoint();
    void slotTab5RecvData(QString);
};

#endif // TAB5CHARTPLOT_H
