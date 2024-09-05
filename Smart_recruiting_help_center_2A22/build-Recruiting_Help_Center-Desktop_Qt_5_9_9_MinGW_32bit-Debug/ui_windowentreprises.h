/********************************************************************************
** Form generated from reading UI file 'windowentreprises.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WINDOWENTREPRISES_H
#define UI_WINDOWENTREPRISES_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WindowEntreprises
{
public:
    QTabWidget *candidat;
    QWidget *tab;
    QGroupBox *groupBox_2;
    QTableView *tableView;
    QLineEdit *lineEdit_7;
    QPushButton *pushButton_6;
    QPushButton *pushButton_10;
    QGroupBox *groupBox_3;
    QLineEdit *lineEdit_6;
    QPushButton *pushButton_3;
    QLabel *label_6;
    QGroupBox *groupBox;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_4;
    QLineEdit *lineEdit_5;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLineEdit *lineEdit_8;
    QLabel *label_7;
    QGroupBox *groupBox_4;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QWidget *tab_2;
    QWidget *tab_3;
    QLineEdit *lineEdit_9;
    QPlainTextEdit *plainTextEdit;
    QPushButton *pushButton_7;
    QWidget *tab_4;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QGroupBox *groupBox_5;
    QPlainTextEdit *plainTextEdit_2;

    void setupUi(QDialog *WindowEntreprises)
    {
        if (WindowEntreprises->objectName().isEmpty())
            WindowEntreprises->setObjectName(QStringLiteral("WindowEntreprises"));
        WindowEntreprises->resize(967, 571);
        WindowEntreprises->setStyleSheet(QLatin1String("#QWidget {\n"
"\n"
"background:#404040;\n"
"\n"
"}\n"
"\n"
"QTabWidget::pane { /* The tab widget frame */\n"
"\n"
"border-top: 5px solid #535353;\n"
"\n"
"}\n"
"\n"
"QTabWidget::tab-bar {\n"
"\n"
"left: 0px; /* move to the right by 5px */\n"
"\n"
"}\n"
"\n"
"/* Style the tab using the tab sub-control. Note that it reads QTabBar _not_ QTabWidget */\n"
"\n"
"QTabBar::tab {\n"
"\n"
"background: #dcdcdc;\n"
"\n"
"border: 2px solid #535353;\n"
"\n"
"border-bottom-color: rgb(0, 0, 0); /* same as the pane color */\n"
"\n"
"border-top-left-radius: 7px;\n"
"\n"
"border-top-right-radius: 7px;\n"
"\n"
"min-width: 120px;\n"
"\n"
"padding: 8px;\n"
"\n"
"color: rgb(0, 0, 184);\n"
"\n"
"font-size:15px;\n"
"\n"
"font-family:Arial, Helvetica, sans-serif;\n"
"\n"
"}\n"
"\n"
"QTabBar::tab:selected, QTabBar::tab:hover {\n"
"\n"
"background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #c3a1a1, stop: 0.4 rgb(85, 0, 255), stop: 0.5 rgb(67, 0, 202), stop: 1.0 #3f00bd);\n"
"color :white;\n"
"}\n"
"\n"
"QTabBar::tab:selected {\n"
""
                        "\n"
"border-color: rgb(0, 0, 0);\n"
"\n"
"border-bottom-color: #535353; /* same as pane color */\n"
"\n"
"color: #dcdcdc;\n"
"\n"
"font-size:15px;\n"
"\n"
"font-family:Arial, Helvetica, sans-serif;\n"
"\n"
"}\n"
"\n"
"QTabBar::tab:!selected {\n"
"\n"
"margin-top: 2px; /* make non-selected tabs look smaller */\n"
"\n"
"}\n"
"\n"
""));
        candidat = new QTabWidget(WindowEntreprises);
        candidat->setObjectName(QStringLiteral("candidat"));
        candidat->setGeometry(QRect(10, 10, 951, 551));
        candidat->setStyleSheet(QLatin1String("QGroupBox {\n"
"     background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                       stop: 0 #E0E0E0, stop: 1 #FFFFFF);\n"
"     border: 2px solid gray;\n"
"     border-radius: 5px;\n"
"     margin-top: 1ex; /* leave space at the top for the title */\n"
" }\n"
" \n"
" QGroupBox::title {\n"
"     subcontrol-origin: margin;\n"
"     subcontrol-position: top center; /* position at the top center */\n"
"     padding: 0 3px;\n"
"     background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                       stop: 0 #FFOECE, stop: 1 #FFFFFF);\n"
" }"));
        candidat->setTabShape(QTabWidget::Triangular);
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        groupBox_2 = new QGroupBox(tab);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(280, 20, 641, 351));
        groupBox_2->setStyleSheet(QStringLiteral(""));
        tableView = new QTableView(groupBox_2);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(10, 70, 621, 271));
        lineEdit_7 = new QLineEdit(groupBox_2);
        lineEdit_7->setObjectName(QStringLiteral("lineEdit_7"));
        lineEdit_7->setGeometry(QRect(20, 40, 113, 20));
        pushButton_6 = new QPushButton(groupBox_2);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(150, 40, 75, 23));
        pushButton_10 = new QPushButton(groupBox_2);
        pushButton_10->setObjectName(QStringLiteral("pushButton_10"));
        pushButton_10->setGeometry(QRect(540, 30, 75, 23));
        pushButton_10->setStyleSheet(QStringLiteral(""));
        groupBox_3 = new QGroupBox(tab);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(280, 380, 281, 121));
        groupBox_3->setStyleSheet(QStringLiteral(""));
        lineEdit_6 = new QLineEdit(groupBox_3);
        lineEdit_6->setObjectName(QStringLiteral("lineEdit_6"));
        lineEdit_6->setGeometry(QRect(60, 40, 113, 20));
        lineEdit_6->setStyleSheet(QStringLiteral(""));
        pushButton_3 = new QPushButton(groupBox_3);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(190, 40, 75, 23));
        pushButton_3->setStyleSheet(QStringLiteral(""));
        label_6 = new QLabel(groupBox_3);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(10, 40, 47, 14));
        groupBox = new QGroupBox(tab);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(0, 20, 271, 481));
        groupBox->setStyleSheet(QStringLiteral(""));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 50, 47, 14));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 100, 47, 14));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(10, 150, 47, 14));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(10, 210, 47, 14));
        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(10, 270, 47, 14));
        lineEdit = new QLineEdit(groupBox);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(100, 50, 113, 20));
        lineEdit->setStyleSheet(QStringLiteral(""));
        lineEdit_2 = new QLineEdit(groupBox);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(100, 100, 113, 20));
        lineEdit_2->setStyleSheet(QStringLiteral(""));
        lineEdit_3 = new QLineEdit(groupBox);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(100, 150, 113, 20));
        lineEdit_3->setStyleSheet(QStringLiteral(""));
        lineEdit_4 = new QLineEdit(groupBox);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(100, 200, 113, 20));
        lineEdit_4->setStyleSheet(QStringLiteral(""));
        lineEdit_5 = new QLineEdit(groupBox);
        lineEdit_5->setObjectName(QStringLiteral("lineEdit_5"));
        lineEdit_5->setGeometry(QRect(100, 260, 113, 20));
        lineEdit_5->setStyleSheet(QStringLiteral(""));
        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(110, 350, 75, 23));
        pushButton->setStyleSheet(QStringLiteral(""));
        pushButton_2 = new QPushButton(groupBox);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(110, 400, 75, 23));
        pushButton_2->setStyleSheet(QStringLiteral(""));
        lineEdit_8 = new QLineEdit(groupBox);
        lineEdit_8->setObjectName(QStringLiteral("lineEdit_8"));
        lineEdit_8->setGeometry(QRect(100, 310, 113, 20));
        lineEdit_8->setStyleSheet(QStringLiteral(""));
        label_7 = new QLabel(groupBox);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(10, 320, 47, 14));
        groupBox_4 = new QGroupBox(tab);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        groupBox_4->setGeometry(QRect(570, 380, 331, 121));
        pushButton_4 = new QPushButton(groupBox_4);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(50, 50, 75, 23));
        pushButton_5 = new QPushButton(groupBox_4);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(170, 50, 75, 23));
        candidat->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        candidat->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        lineEdit_9 = new QLineEdit(tab_3);
        lineEdit_9->setObjectName(QStringLiteral("lineEdit_9"));
        lineEdit_9->setGeometry(QRect(372, 90, 201, 20));
        plainTextEdit = new QPlainTextEdit(tab_3);
        plainTextEdit->setObjectName(QStringLiteral("plainTextEdit"));
        plainTextEdit->setGeometry(QRect(370, 120, 201, 131));
        pushButton_7 = new QPushButton(tab_3);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setGeometry(QRect(440, 270, 75, 23));
        candidat->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        pushButton_8 = new QPushButton(tab_4);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));
        pushButton_8->setGeometry(QRect(290, 240, 75, 23));
        pushButton_8->setStyleSheet(QStringLiteral(""));
        pushButton_9 = new QPushButton(tab_4);
        pushButton_9->setObjectName(QStringLiteral("pushButton_9"));
        pushButton_9->setGeometry(QRect(450, 240, 75, 23));
        pushButton_9->setStyleSheet(QStringLiteral(""));
        groupBox_5 = new QGroupBox(tab_4);
        groupBox_5->setObjectName(QStringLiteral("groupBox_5"));
        groupBox_5->setGeometry(QRect(310, 60, 181, 131));
        plainTextEdit_2 = new QPlainTextEdit(groupBox_5);
        plainTextEdit_2->setObjectName(QStringLiteral("plainTextEdit_2"));
        plainTextEdit_2->setGeometry(QRect(-10, 20, 201, 131));
        candidat->addTab(tab_4, QString());

        retranslateUi(WindowEntreprises);

        candidat->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(WindowEntreprises);
    } // setupUi

    void retranslateUi(QDialog *WindowEntreprises)
    {
        WindowEntreprises->setWindowTitle(QApplication::translate("WindowEntreprises", "Gestion Entreprises", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("WindowEntreprises", "Afficher", Q_NULLPTR));
        pushButton_6->setText(QApplication::translate("WindowEntreprises", "recherche", Q_NULLPTR));
        pushButton_10->setText(QApplication::translate("WindowEntreprises", "IMPRIMER", Q_NULLPTR));
        groupBox_3->setTitle(QApplication::translate("WindowEntreprises", "supprimer", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("WindowEntreprises", "Supprimer", Q_NULLPTR));
        label_6->setText(QApplication::translate("WindowEntreprises", "Id", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("WindowEntreprises", "ajouter", Q_NULLPTR));
        label->setText(QApplication::translate("WindowEntreprises", "ID", Q_NULLPTR));
        label_2->setText(QApplication::translate("WindowEntreprises", "Nom", Q_NULLPTR));
        label_3->setText(QApplication::translate("WindowEntreprises", "Adresse", Q_NULLPTR));
        label_4->setText(QApplication::translate("WindowEntreprises", "Mail", Q_NULLPTR));
        label_5->setText(QApplication::translate("WindowEntreprises", "Tel", Q_NULLPTR));
        pushButton->setText(QApplication::translate("WindowEntreprises", "Ajouter", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("WindowEntreprises", "Modifier", Q_NULLPTR));
        label_7->setText(QApplication::translate("WindowEntreprises", "Fax", Q_NULLPTR));
        groupBox_4->setTitle(QApplication::translate("WindowEntreprises", "tri selon", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("WindowEntreprises", "Nom A-Z", Q_NULLPTR));
        pushButton_5->setText(QApplication::translate("WindowEntreprises", "Nom Z-A", Q_NULLPTR));
        candidat->setTabText(candidat->indexOf(tab), QApplication::translate("WindowEntreprises", "Ajouter une entreprise", Q_NULLPTR));
        candidat->setTabText(candidat->indexOf(tab_2), QApplication::translate("WindowEntreprises", "Statistiques", Q_NULLPTR));
        pushButton_7->setText(QApplication::translate("WindowEntreprises", "Envoyer", Q_NULLPTR));
        candidat->setTabText(candidat->indexOf(tab_3), QApplication::translate("WindowEntreprises", "Mail", Q_NULLPTR));
        pushButton_8->setText(QApplication::translate("WindowEntreprises", "Accepter", Q_NULLPTR));
        pushButton_9->setText(QApplication::translate("WindowEntreprises", "Refuser", Q_NULLPTR));
        groupBox_5->setTitle(QApplication::translate("WindowEntreprises", "              Candidat", Q_NULLPTR));
        candidat->setTabText(candidat->indexOf(tab_4), QApplication::translate("WindowEntreprises", "Accepter/Refuser", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class WindowEntreprises: public Ui_WindowEntreprises {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINDOWENTREPRISES_H
