#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QString>
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->comboBox->addItem(QIcon(":/rec/img/closeIcon.png"),"Harry"); // Adding Icon to Combobox
    ui->comboBox->addItem(QIcon(":/rec/img/newFile.png"),"Marks");
    ui->comboBox->addItem(QIcon(":/rec/img/saveIcon.png"),"Harsh");
    ui->comboBox->addItem(QIcon(":/rec/img/save.png"),"John");
    ui->comboBox->addItem("Juli");
    ui->comboBox->addItem("Jony");

    for(int i = 0;i<10;i++){
        ui->comboBox->addItem(QIcon(":/rec/img/save.png"),QString::number(i)+"  name");
    }

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
   QMessageBox::information(this,"title",ui->comboBox->currentText());
    QMessageBox::information(this,"title",QString::number(ui->comboBox->currentIndex()));
}

