#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}




void MainWindow::on_pushButton_GestionOffres_clicked()
{
    WindowOffres* O=new WindowOffres() ;
    O->show() ;
}





void MainWindow::on_pushButton_GestionEntreprises_clicked()
{
    WindowEntreprises* EP=new WindowEntreprises() ;
    EP->show() ;
}
