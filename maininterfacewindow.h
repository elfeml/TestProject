#ifndef MAININTERFACEWINDOW_H
#define MAININTERFACEWINDOW_H

#include <QMainWindow>
#include <QList>
#include "datatuple.h"
#include "filereader.h"
#include <QStandardItemModel>
#include <QStandardItem>

#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtCharts/QChartView>
#include <QtCharts/QBarSeries>
#include <QtCharts/QBarSet>
#include <QtCharts/QLegend>
#include <QtCharts/QBarCategoryAxis>

QT_CHARTS_USE_NAMESPACE

namespace Ui {
class MainInterfaceWindow;
}

class MainInterfaceWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainInterfaceWindow(QWidget *parent = 0);
    ~MainInterfaceWindow();

private slots:
    void on_actionOpen_CSV_triggered();


private:
    Ui::MainInterfaceWindow *ui;

    QList<dataTuple> *m_dataTuple;
    void setUpCharts(QList<dataTuple>* data);
};

#endif // MAININTERFACEWINDOW_H
