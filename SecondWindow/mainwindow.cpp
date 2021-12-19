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


void MainWindow::on_pushButton_clicked()
{
    // take you to sencond window in one direction and only one window can be used at a time
//    SecDialog secDeialog;
//    secDeialog.setModal(true);
//    secDeialog.exec();
    hide();// by using this method , it hides the first window after clicking the botton
    // Both windows can be used at a time
    secDialog = new SecDialog(this);
    secDialog->show();

}

