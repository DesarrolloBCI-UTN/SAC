#ifndef MYWIDGET_H
#define MYWIDGET_H

#include <QWidget>
#include <QPushButton>
#include <QToolButton>

class myWidget : public QWidget
{
    Q_OBJECT
public:
    explicit myWidget(QWidget *parent = nullptr);
    ~myWidget();
    QString img, texto;

    QToolButton *boton;
    void setIcono(QString img);
    QString getIcono();
    void setTexto(QString texto);
    QString getTexto();
signals:
    void rewind();
    void play();
    void next();
    void stop();

private slots:
    void btnClicked();

};

#endif // MYWIDGET_H
