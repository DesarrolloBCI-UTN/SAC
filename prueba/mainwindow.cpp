#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->widget->setLabel("Flecha arriba");
    ui->widget->setImage(":/resources/Img/flecha.png");
    ui->widget_2->setLabel("Flecha izquierda");
    ui->widget_2->setImage(":/resources/Img/flechaizquierda.png");
    ui->widget_3->setLabel("Flecha derecha");
    ui->widget_3->setImage(":/resources/Img/flechaderecha.png");
    ui->widget_4->setLabel("Flecha abajo");
    ui->widget_4->setImage(":/resources/Img/flechaabajo.png");
    connect(ui->widget->button,SIGNAL(clicked()),this,SLOT(CambioTexto()));
    connect(ui->widget_2->button,SIGNAL(clicked()),this,SLOT(CambioTexto2()));
    connect(ui->widget_3->button,SIGNAL(clicked()),this,SLOT(CambioTexto3()));
    connect(ui->widget_4->button,SIGNAL(clicked()),this,SLOT(CambioTexto4()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow :: CambioTexto()
{
    ui->lineEdit->setText(ui->widget->getLabel());
}

void MainWindow :: CambioTexto2()
{
    ui->lineEdit->setText(ui->widget_2->getLabel());
}

void MainWindow :: CambioTexto3()
{
    ui->lineEdit->setText(ui->widget_3->getLabel());
}

void MainWindow :: CambioTexto4()
{
    ui->lineEdit->setText(ui->widget_4->getLabel());
}

void MainWindow::on_ButtonBlanco_clicked()
{
    ui->widget->setColour("white");
    ui->widget->setFontColour("black");
    ui->widget_2->setColour("white");
    ui->widget_2->setFontColour("black");
    ui->widget_3->setColour("white");
    ui->widget_3->setFontColour("black");
    ui->widget_4->setColour("white");
    ui->widget_4->setFontColour("black");
}

void MainWindow::on_ButtonNegro_clicked()
{
    ui->widget->setColour("black");
    ui->widget->setFontColour("white");
//    ui->widget->setAutoFillBackground(true);
    ui->widget_2->setColour("black");
    ui->widget_2->setFontColour("white");
    ui->widget_3->setColour("black");
    ui->widget_3->setFontColour("white");
    ui->widget_4->setColour("black");
    ui->widget_4->setFontColour("white");
}
