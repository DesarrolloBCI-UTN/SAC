#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPushButton>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
   QString a = ":/Img/flecha.png";
   ui->pushButton->setIcon(QIcon(a));
   ui->pushButton->setText(a);
}
