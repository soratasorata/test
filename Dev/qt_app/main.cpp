#include "mainwindow.h"
#include <QApplication>
#include <QPushButton>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    QPushButton bouton("Salut les Zéros, la forme ?");
        bouton.setText("Pimp mon bouton !");

        bouton.show();
    return a.exec();
}
