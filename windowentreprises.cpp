#include "windowentreprises.h"
#include "ui_windowentreprises.h"
#include <QSystemTrayIcon>
#include <QtDebug>
#include <QObject>
#include<QMessageBox>
#include<QtPrintSupport/QPrinter>
#include<QFileDialog>
#include<QTextDocument>
#include<QIntValidator>
#include<QValidator>
#include<QPdfWriter>
#include<QPainter>
#include <QTextEdit>
#include<QPrinter>
#include<QPrintDialog>
#include <src/src/SmtpMime>
#include <QtNetwork>
#include <QFile>
#include<QCompleter>
#include "mailsmtp.h"


WindowEntreprises::WindowEntreprises(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::WindowEntreprises)
{
    ui->setupUi(this);



    ui->tableView->setModel(tempentreprise.afficher());

}

WindowEntreprises::~WindowEntreprises()
{
    delete ui;
}


void WindowEntreprises::on_pushButton_clicked()
{
    {

        QString  id=ui->lineEdit->text();
        QString nom=ui->lineEdit_2->text();
        QString adresse=ui->lineEdit_3->text();
        QString mail=ui->lineEdit_4->text();
        QString tel=ui->lineEdit_5->text();
        QString fax=ui->lineEdit_6->text();

        entreprise f(id,nom,adresse,mail,tel,fax);

        bool test=f.ajouter();
        if(test)
        {


            ui->tableView->setModel(tempentreprise.afficher());
            QMessageBox::information(nullptr,QObject::tr("Ajout"),
                                     QObject::tr("Ajout avec succès.\n""Click Cancel to exit."),QMessageBox::Cancel);

      }
        else
        {

           QMessageBox::critical(nullptr,QObject::tr("Ajout"),
                                     QObject::tr("Ajout echoue.\n""Click Cancel to exit."),QMessageBox::Cancel);
        }
    }
}


void WindowEntreprises::on_pushButton_2_clicked()
{
    QString  id=ui->lineEdit->text();
       QString nom=ui->lineEdit_2->text();
       QString adresse=ui->lineEdit_3->text();
       QString mail=ui->lineEdit_4->text();
       QString tel=ui->lineEdit_5->text();
       QString fax=ui->lineEdit_6->text();

       entreprise f(id,nom,adresse,mail,tel,fax);

bool test=f.modifier(id);
    if(test)
    {


        ui->tableView->setModel(tempentreprise.afficher());
        QMessageBox::information(nullptr,QObject::tr("modifier"),
                                 QObject::tr("modifier avec succès.\n""Click Cancel to exit."),QMessageBox::Cancel);



  }
    else
        QMessageBox::critical(nullptr,QObject::tr("modifier"),
                                 QObject::tr("modifier echoue.\n""Click Cancel to exit."),QMessageBox::Cancel);
}




void WindowEntreprises::on_tableView_activated(const QModelIndex &index)
{
    QString id=ui->tableView->model()->data(index).toString();
          QSqlQuery query;
          query.prepare("select * from societe where id LIKE '"+id+"%' or nom LIKE '"+id+"%'  or adresse LIKE '"+id+"%' or mail LIKE '"+id+"%' or tel LIKE '"+id+"%'or fax LIKE '"+id+"%'");
          if(query.exec())
          {
            while(query.next())
            {
                ui->lineEdit->setText(query.value(0).toString());
                ui->lineEdit_2->setText(query.value(1).toString());
                ui->lineEdit_3->setText(query.value(2).toString());
                ui->lineEdit_4->setText(query.value(3).toString());
                ui->lineEdit_5->setText(query.value(4).toString());
                ui->lineEdit_6->setText(query.value(4).toString());


            }
          }
            else
            {

                //QMessageBox::critical(this,tr("error::"),query.lastError().text());
              QMessageBox::critical(nullptr, QObject::tr("error"),
                          QObject::tr("error.\n""Click Cancel to exit."), QMessageBox::Cancel);
          }
}


void WindowEntreprises::on_pushButton_3_clicked()
{
    QString id=ui->lineEdit->text();
    bool test=tempentreprise.supprimer(id);
    if(test){


        ui->tableView->setModel(tempentreprise.afficher());
        QMessageBox::information(nullptr,QObject::tr("suppression"),
                                 QObject::tr("suppression avec succès.\n""Click Cancel to exit."),QMessageBox::Cancel);
    }
    else {
        QMessageBox::critical(nullptr,QObject::tr("suppression"),
                                 QObject::tr("suppression echoue.\n""Click Cancel to exit."),QMessageBox::Cancel);
    }
}

