#ifndef LABEL_H
#define LABEL_H
#include <QWidget>
#include <QString>
#include <QPushButton>
#include <QLayout>
#include <QLabel>
#include <QString>
#include <QGraphicsTextItem>
#include <QToolButton>
#include <QSize>
#include <QFrame>

using namespace std;

class ManejoInformacion : public QWidget
{
    Q_OBJECT

public:
    explicit ManejoInformacion(QWidget *parent = nullptr);
    ~ManejoInformacion(){}
    QString image;
    QString sound;
    QString label;
    bool audio;
    void setFrame();
    void frameOn();
    void frameOff();
    void setLabel(QString textToShow);
    QString getLabel();
    void setImage(QString imageToShow);
    QString getImage();
    void setColour(QString color);
    QString getColour();
    void setFontColour(QString fontColor);
    QString getFontColour();
    void setFontType();
    void setSizeText();
    QToolButton *button = new QToolButton(this);

private:
    QString backgroundColour;
    QString fontColour;

};
#endif
