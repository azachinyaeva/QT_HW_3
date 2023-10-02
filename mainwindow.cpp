#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    dialog = new Dialog(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pb_exit_clicked()
{

}

void MainWindow::on_pb_connect_clicked()
{
    dialog->show();
}

