#include "mywidget.h"
#include <QPushButton>
#include <QLayout>
#include <QToolButton>


myWidget::myWidget(QWidget *parent) : QWidget(parent)
{
   /*QHBoxLayout *layout = new QHBoxLayout(this);
   layout->setMargin(0);*/

    /*Creo un default*/
    this->boton = new QToolButton(this);
    this->boton->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

    //this->boton->setFlat(true);
    //this->boton->setMinimumSize(100,100);

    //layout->addWidget( boton );
    this->img = ":/Img/flecha.png";
    this->texto = "Arriba";

    //setteo imagen
   this->setIcono(this->img);

    //setteo texto
    this->setTexto(this->texto);

    //conecto la signal con el slot.
    connect(boton, SIGNAL(clicked()), this, SLOT(btnClicked()));

}

myWidget::~myWidget(void)
{

}
void myWidget::setIcono(QString img)
{
    this->boton->setIcon(QIcon(img));
    this->boton->setIconSize(QIcon(img).availableSizes().first());
}
void myWidget::setTexto(QString texto)
{
    this->boton->setText(texto);
}

QString myWidget::getTexto()
{
    return this->texto;
}

QString myWidget::getIcono()
{
    return this->img;
}

void myWidget::btnClicked()
{

    printf("El texto anterior era: %s \n",qPrintable(this->getTexto()));
    printf("La imagen anterior era: %s \n",qPrintable(this->getIcono()));
    //printf(this->getTexto().toStdString().c_str());
    this->img = ":/Img/flechaabajo.png";
    this->texto = "Abajo";
    this->setIcono(img);
    this->setTexto(texto);
}
