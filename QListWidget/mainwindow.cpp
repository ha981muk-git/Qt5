#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QListWidgetItem>
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QListWidgetItem *item = new QListWidgetItem(QIcon(":/rec/img/saveIcon.png"),"Marks");
    ui->listWidget->addItem(item);
    QListWidgetItem *item2 = new QListWidgetItem(QIcon(":/rec/img/saveIcon.png"),"Panday");
    ui->listWidget->addItem(item2);
    QListWidgetItem *item3 = new QListWidgetItem(QIcon(":/rec/img/saveIcon.png"),"ham");
    ui->listWidget->addItem(item3);
    QListWidgetItem *item4 = new QListWidgetItem(QIcon(":/rec/img/saveIcon.png"),"Juily");
    ui->listWidget->addItem(item4);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{    ui->listWidget->currentItem()->setBackground(Qt::red);
    QMessageBox::information(this,"title",ui->listWidget->currentItem()->text());
     ui->listWidget->currentItem()->setForeground(Qt::white);


}

