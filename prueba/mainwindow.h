#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;

public slots:
    void CambioTexto();
    void CambioTexto2();
    void CambioTexto3();
    void CambioTexto4();
private slots:
    void on_ButtonBlanco_clicked();
    void on_ButtonNegro_clicked();
};

#endif // MAINWINDOW_H
