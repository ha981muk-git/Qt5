#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QDebug>

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


void MainWindow::on_pushButton_clicked()
{   /*QMessageBox types
     *void about
     *QMessageBox::aboutQt(this,"Titel","Custom Messages");
     *
     *void aboutQT
     * QMessageBox::aboutQt(this,"Titel");
     *
     *StandardButton critical
     *QMessageBox::critical(this,"Titel","a custom message");
     *
     *StandardButton information
     *QMessageBox::information(this,"Titel","Custom Messages");
     *
     *StandardButton question
     * QMessageBox::question(this,"Titel","Custom Messages?");
     *
     *StandardButton warning
     *QMessageBox::warning(this,"Titel","Custom Messages?");
     */

    // getting reply and saving reply from user
     QMessageBox::StandardButton reply = QMessageBox::question(this,"Titel,","Output Message",
                                                               QMessageBox::Yes|QMessageBox::No);
     if(reply==QMessageBox::Yes){
         QApplication::quit();
     }else{
         qDebug() << "No is Clicked";
     }

}

