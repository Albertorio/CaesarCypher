#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <string>

using namespace std;

namespace Ui {
    class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();


private slots:

    void on_EncodeButton_clicked();

    void on_DecodeButton_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
