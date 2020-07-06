#ifndef MYWIDGET_H
#define MYWIDGET_H

#include <QWidget>
#include <QPushButton>
#include <QToolButton>
#include <QGridLayout>

class myWidget : public QWidget
{
    Q_OBJECT
public:
    explicit myWidget(QWidget *parent = nullptr);
    ~myWidget();

    QToolButton *boton;
    QGridLayout *layout;

    //setters
    void setIcono(QString img);
    void setTexto(QString texto);
    //getters
    QString getIcono();
    QString getTexto();

private:
    QString img, texto;


private slots:
    void btnClicked();

};

#endif // MYWIDGET_H
