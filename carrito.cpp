#include "carrito.h"
#include "ui_carrito.h"

carrito::carrito(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::carrito)
{
    ui->setupUi(this);
}

carrito::~carrito()
{
    delete ui;
}
