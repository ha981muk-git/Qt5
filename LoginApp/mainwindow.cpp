#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QMessageBox>
#include <QPixmap>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //Adding image with resources files
    QPixmap pix(":/Resources/img/SojaChickenCurry.jpg");
    // Add picture to the labels
   // QPixmap pix("C:/Users/harsh/OneDrive/Desktop/Aktuell/SojaChickenCurry.jpg");
    // ui->label_pic->setPixmap(pix.scaled(100,100,Qt::KeepAspectRatio));
    int w = ui->label_pic->width();// get width of label
    int h = ui->label_pic->height();// get heigth of the label
    ui->label_pic->setPixmap(pix.scaled(w,h,Qt::KeepAspectRatio));
    // second method mannual method by design
    //-->https://www.youtube.com/watch?v=SyzxerD2Yps&list=PLS1QulWo1RIZiBcTr5urECberTITj7gjA&index=11

    ui->statusbar->addPermanentWidget(ui->label_3);
    ui->statusbar->addPermanentWidget(ui->progressBar);
    //can take ratio in statusbar , can take one more parameter
//        ui->statusbar->addPermanentWidget(ui->label_3,1);
//        ui->statusbar->addPermanentWidget(ui->progressBar,3);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_Login_clicked()
{
    QString username = ui->lineEdit_username->text();
    QString password = ui->lineEdit_password->text();

    //echoMode in QEditLine int design editor can make password as  ***

    if(username == "test" && password == "test"){
        /*
         //Without using statusbar
        QMessageBox::information(this,"Login","Username and Password is corret");
        hide();// comment hide(); that it show both windows
        secDialog = new SecDialog(this);
        secDialog->show();
       */

        // with status bar
       // ui->statusbar->showMessage("Username and Password is corret");
        //time can be add to disappear the message
        ui->statusbar->showMessage("Username and Password is corret",5000);

    }else{
          // show in statusbar
         ui->statusbar->showMessage("Username and Password is not corret",5000);
        //without statusbar
       // QMessageBox::warning(this,"Login","Username and Password is not corret",5000);
    }
}

