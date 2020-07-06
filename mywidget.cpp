#include "mywidget.h"
#include <QPushButton>
#include <QLayout>
#include <QToolButton>
#include <QFrame>
#include <QFont>


myWidget::myWidget(QWidget *parent) : QWidget(parent)
{
     /*Todo esto es codigo de prueba a modo de ejemplo*/

    /*Creo un default*/
    this->boton = new QToolButton(this);
    this->boton->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

    /*Creo layout: Aunque parezca inutil porque el widget se compone
     * de un solo elemento QToolButton, es necesario para hace rezise.
     * Comenten las 3 lineas siguientes y vean lo que pasa si no esta*/
    this->layout = new QGridLayout;
    this->layout->addWidget(this->boton);
    setLayout(this->layout);


    this->img = ":/Img/folks.PNG";
    this->texto = "Cambiar";

    /*setteo imagen*/
    this->setIcono(this->img);

    /*setteo texto*/
    this->setTexto(this->texto);


    /*conecto la signal con el slot: Les puse para que cargue una imagen mas pequeña
    * vean como pueden reducir el widget dependiendo el icono que se esta mostrando
    * (sin escalar el icono)*/
    connect(boton, SIGNAL(clicked()), this, SLOT(btnClicked()));

}

myWidget::~myWidget(void)
{

}
/**
 * @fn myWidget::setIcono
 * @brief Muestra una imagen en el widget.
 * @details Recibe un path de recurso de imagen en formato QString
 * y luego la carga como icono del widget.
 * @param img: path de la imagen a mostrar.
 * @return void
 */
void myWidget::setIcono(QString img)
{
    /*COMENTEN ESTAS DOS LINEAS Y VEAN LO QUE PASA Y PORQUE ESTAN C/U*/
    this->boton->setSizePolicy(QSizePolicy::MinimumExpanding,QSizePolicy::MinimumExpanding);
    this->boton->setIconSize(QIcon(img).availableSizes().first());

    this->boton->setIcon(QIcon(img));

}
void myWidget::setTexto(QString texto2)
{
    this->texto = texto2;
    this->boton->setText(texto2);

}

QString myWidget::getTexto()
{
    return this->texto;
}

/**
 * @fn myWidget::getIcono
 * @brief Funcion para obtener la imagen actual del
 * widget en formato QString.
 * @param void
 * @return QString con el path de la imagen.
 */
QString myWidget::getIcono()
{
    return this->img;
}

void myWidget::btnClicked()
{

    /*Esto les puede ser util para debuggear*/
    printf("El texto anterior era: %s \n",qPrintable(this->getTexto()));
    printf("La imagen anterior era: %s \n",qPrintable(this->getIcono()));
    //printf(this->getTexto().toStdString().c_str());
    this->img = ":/Img/flechaabajo.png";
    this->texto = "Abajo";
    this->setIcono(img);
    this->setTexto(texto);
}
