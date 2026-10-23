#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->cboxMenuArriba->setStyleSheet(
        "QComboBox {"
        "    border: none;"
        "    background-color: transparent;" /* O el color de fondo que desees */
        "    padding: 1px 18px 1px 3px;"
        "    color:rgb(160, 82, 45);"
        "}"
        "QComboBox::drop-down {"
        "    subcontrol-origin: padding;"
        "    subcontrol-position: top right;"
        "    width: 15px;"
        "    color: rgb(160, 82, 45);"
        "    border-left-width: 0px;" /* Quita la línea divisoria del botón */
        "}"
        );


}

MainWindow::~MainWindow()
{
    delete ui;
}
