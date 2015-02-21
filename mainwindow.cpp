#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "dialogstatusserialport.h"

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

void MainWindow::on_pushButton_1_clicked()
{
    ui->lineEditNumbers->insert("1");
}

void MainWindow::on_pushButton_2_clicked()
{
    ui->lineEditNumbers->insert("2");
}
void MainWindow::on_pushButton_3_clicked()
{
    ui->lineEditNumbers->insert("3");
}
void MainWindow::on_pushButton_4_clicked()
{
    ui->lineEditNumbers->insert("4");
}
void MainWindow::on_pushButton_5_clicked()
{
    ui->lineEditNumbers->insert("5");
}
void MainWindow::on_pushButton_6_clicked()
{
    ui->lineEditNumbers->insert("6");
}
void MainWindow::on_pushButton_7_clicked()
{
    ui->lineEditNumbers->insert("7");
}
void MainWindow::on_pushButton_8_clicked()
{
    ui->lineEditNumbers->insert("8");
}
void MainWindow::on_pushButton_9_clicked()
{
    ui->lineEditNumbers->insert("9");
}
void MainWindow::on_pushButton_0_clicked()
{
    ui->lineEditNumbers->insert("0");
}
void MainWindow::on_pushButton_A_clicked()
{
    ui->lineEditNumbers->insert("A");
}
void MainWindow::on_pushButton_B_clicked()
{
    ui->lineEditNumbers->insert("B");
}
void MainWindow::on_pushButton_C_clicked()
{
    ui->lineEditNumbers->insert("C");
}
void MainWindow::on_pushButton_D_clicked()
{
    ui->lineEditNumbers->insert("D");
}
void MainWindow::on_pushButton_astr_clicked()
{
    ui->lineEditNumbers->insert("*");
}
void MainWindow::on_pushButton_grid_clicked()
{
    ui->lineEditNumbers->insert("#");
}


void MainWindow::on_pushButtonConnected_clicked()
{
    ui->textBrowserStatus->insertHtml("test");
}

void MainWindow::on_action_triggered()
{
    DialogStatusSerialPort mDialog;

    mDialog.setModal(true);
    mDialog.exec();
}
