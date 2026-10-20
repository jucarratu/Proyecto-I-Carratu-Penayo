#include "ventana2.h"
#include "ui_ventana2.h"

ventana2::ventana2(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::ventana2)
{
    ui->setupUi(this);

    ui->label_2->setText("Empanada\n\n\n$2500");
    ui->label_3->setText("Un bocadillo destinado a la saciedad y disfrute de los \npaladares mas exquisitos y codiciados entre los \nmiembros del colegiado.");
}

ventana2::~ventana2()
{
    delete ui;
}
