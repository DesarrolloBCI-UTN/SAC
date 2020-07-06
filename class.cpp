#include "class.h"

ManejoInformacion::ManejoInformacion (QWidget *parent) : QWidget(parent)
{
   this->button->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
   this->button->setIconSize(QSize(60,40));
}

void ManejoInformacion :: setImage(QString imageToShow)
{
    this->image = imageToShow;
    this->button->setIcon(QIcon(image));
}

void ManejoInformacion :: setLabel(QString textToShow)
{
    this->label = textToShow;
    this->button->setText(label);
}

void ManejoInformacion :: setColour(QString color)
{
    this->backgroundColour = color;
    if(color == "black")
        this->button->setStyleSheet("background-color:black;");
    else
        this->button->setStyleSheet("background-color:white;");
}

void ManejoInformacion :: setFontColour(QString fontColor)
{
    this->fontColour = fontColor;
    if(fontColor == "black")
        this->setStyleSheet("color: black");
    else
        this->setStyleSheet("color: white");
}

QString ManejoInformacion :: getLabel()
{
    return this->label;
}

QString ManejoInformacion :: getImage()
{
    return this->image;
}

QString ManejoInformacion :: getColour()
{
    return this->backgroundColour;
}

QString ManejoInformacion :: getFontColour()
{
    return this->fontColour;
}
