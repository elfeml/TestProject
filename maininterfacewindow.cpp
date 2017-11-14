#include "maininterfacewindow.h"
#include "ui_maininterfacewindow.h"

MainInterfaceWindow::MainInterfaceWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainInterfaceWindow)
{
    ui->setupUi(this);
    this->showMaximized();
}

MainInterfaceWindow::~MainInterfaceWindow()
{
    delete ui;
}

void MainInterfaceWindow::on_actionOpen_CSV_triggered()
{
    FileReader fileData(":/tycho.csv");
    m_dataTuple = fileData.getData();// brings m_listTuple from fileReader


    QStandardItemModel* csvModel = new QStandardItemModel();
    QList<QStandardItem*> real;

    for (int i = 0; i < m_dataTuple->size(); i++) // read all item of m_datatuple
    {
        real.append(new QStandardItem(QString::number(m_dataTuple->at(i).time())));
        real.append(new QStandardItem(m_dataTuple->at(i).state()));
        real.append(new QStandardItem(QString::number(m_dataTuple->at(i).count())));
        real.append(new QStandardItem(QString::number((m_dataTuple->at(i).incidence()))));
        csvModel->insertRow(csvModel->rowCount(),real);
        ui->tableView->setModel(csvModel);
        real.clear();
    }



    setUpCharts(m_dataTuple); // show m_datatuple on Chart Widget
}

void MainInterfaceWindow::setUpCharts(QList<dataTuple> *data)
{
    ui->chartWidget->display(data); // display method is defined to be applied example
}


