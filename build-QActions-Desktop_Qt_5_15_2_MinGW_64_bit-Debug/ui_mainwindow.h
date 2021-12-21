/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionOpen;
    QAction *actionExit;
    QAction *actionNew_2;
    QAction *actionnew_file;
    QAction *actionnew_folder;
    QWidget *centralwidget;
    QLabel *label;
    QMenuBar *menubar;
    QMenu *menufile;
    QMenu *menuNew;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(961, 687);
        actionOpen = new QAction(MainWindow);
        actionOpen->setObjectName(QString::fromUtf8("actionOpen"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/resources/img/Open.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionOpen->setIcon(icon);
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/resources/img/close.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionExit->setIcon(icon1);
        actionNew_2 = new QAction(MainWindow);
        actionNew_2->setObjectName(QString::fromUtf8("actionNew_2"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/resources/img/newFile.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionNew_2->setIcon(icon2);
        actionnew_file = new QAction(MainWindow);
        actionnew_file->setObjectName(QString::fromUtf8("actionnew_file"));
        actionnew_folder = new QAction(MainWindow);
        actionnew_folder->setObjectName(QString::fromUtf8("actionnew_folder"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 20, 531, 16));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 961, 21));
        menufile = new QMenu(menubar);
        menufile->setObjectName(QString::fromUtf8("menufile"));
        menuNew = new QMenu(menufile);
        menuNew->setObjectName(QString::fromUtf8("menuNew"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        menubar->addAction(menufile->menuAction());
        menufile->addAction(menuNew->menuAction());
        menufile->addAction(actionOpen);
        menufile->addAction(actionExit);
        menufile->addSeparator();
        menufile->addSeparator();
        menuNew->addSeparator();
        menuNew->addAction(actionnew_file);
        menuNew->addAction(actionnew_folder);
        toolBar->addAction(actionNew_2);
        toolBar->addAction(actionOpen);
        toolBar->addAction(actionExit);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionOpen->setText(QCoreApplication::translate("MainWindow", "Open", nullptr));
        actionExit->setText(QCoreApplication::translate("MainWindow", "Exit", nullptr));
        actionNew_2->setText(QCoreApplication::translate("MainWindow", "New", nullptr));
        actionnew_file->setText(QCoreApplication::translate("MainWindow", "new file", nullptr));
        actionnew_folder->setText(QCoreApplication::translate("MainWindow", "new folder", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Right click and add toolbar and drag and drop icons  to add icon below the toolbar ", nullptr));
        menufile->setTitle(QCoreApplication::translate("MainWindow", "file", nullptr));
        menuNew->setTitle(QCoreApplication::translate("MainWindow", "New", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
