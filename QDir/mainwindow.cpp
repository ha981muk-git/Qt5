#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDir>
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    /*
     * // Check if directory exists or not.
    QDir dir("C:/Users/harsh/OneDrive/Desktop/Qt-projects/QDir");
    if(dir.exists()){
        QMessageBox::information(this,"Title","true");
    }else{
        QMessageBox::information(this,"Title","false");
    }
    */

    // shows drives in your computers
    QDir dir;
    foreach(QFileInfo var,dir.drives()){
        ui->comboBox->addItem(var.absoluteFilePath());
    }
    QDir dir2("C:/Users/harsh/OneDrive/Desktop/Qt-projects/QDir");
    foreach(QFileInfo var,dir2.entryInfoList()){
       // ui->comboBox->addItem(var.absoluteFilePath()); //combobox
         // ui->listWidget->addItem(var.absoluteFilePath()); // listWidget
          if(var.isDir())
             ui->listWidget->addItem("Dir :"+var.absoluteFilePath());
          if(var.isFile())
             ui->listWidget->addItem("File :"+var.absoluteFilePath());
    }




}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    QDir dir("C:/Users/harsh/OneDrive/Desktop/Qt-projects/QDir/XXX");
    if(dir.exists()){
            QMessageBox::information(this,"","dir exists");
    }else{
        dir.mkpath("C:/Users/harsh/OneDrive/Desktop/Qt-projects/QDir/XXX");
    }

}
