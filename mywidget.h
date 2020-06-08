#ifndef MYWIDGET_H
#define MYWIDGET_H

#include <QWidget>

class myWidget : public QWidget
{
    Q_OBJECT
public:
    explicit myWidget(QWidget *parent = nullptr);
    ~myWidget();
signals:
    void rewind();
    void play();
    void next();
    void stop();
};

#endif // MYWIDGET_H
