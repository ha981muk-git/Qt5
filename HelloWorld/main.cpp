//Add these Libraries to *.pro file in the begaining
//QT += core gui
//greaterThan(QT_MAJOR_VERSION,4) : QT += widgets

#include <QApplication>
#include <QLabel>

int main(int argc, char *argv[])
{
   QApplication app(argc,argv);
//Every written codes comes between these two codes  QApplication app(argc,argv) and return app.exec();
   QLabel  *label =  new QLabel("Hello World");
   label->setWindowTitle("My First QT Project");// set title for the app
   label->resize(600,400); //resize  window size

   label->show();

    return app.exec();
}
