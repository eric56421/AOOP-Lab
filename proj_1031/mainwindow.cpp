#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_RunButton_clicked()
{
    Building test;
    Data result;

    test.run();
    result = test.getData();

    ui->Testdata_1->setText(QString::fromStdString(result.testdata1));
    ui->Submitdata_1->setText(QString::fromStdString(result.submit1));
    ui->Spendtime_1->setText(QString::number(result.spendtime1));
    ui->Correct_1->setText(QString::number(result.correct1));

    ui->Testdata_2->setText(QString::fromStdString(result.testdata2));
    ui->Submitdata_2->setText(QString::fromStdString(result.submit2));
    ui->Spendtime_2->setText(QString::number(result.spendtime2));
    ui->Correct_2->setText(QString::number(result.correct2));

}
