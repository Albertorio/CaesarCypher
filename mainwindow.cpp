#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <string>
#include <QDebug>
#include <QString>

using namespace std;

string cypher(string, int) ;
string decypher(string, int) ;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_EncodeButton_clicked()
{
   int shift2right = ui->spinBox->value();
   string message = ui->PlainTextTextEdit->toPlainText().toStdString();
   ui->CypherTextEdit->setText(QString::fromStdString(cypher(message, shift2right)));
}

void MainWindow::on_DecodeButton_clicked()
{
    int shift2right = ui->spinBox->value();
    string message = ui->CypherTextEdit->toPlainText().toStdString();
    decypher(message, shift2right);
    ui->PlainTextTextEdit->setText(QString::fromStdString(decypher(message,shift2right))) ;
}
