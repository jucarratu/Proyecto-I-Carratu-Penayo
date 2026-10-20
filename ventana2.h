#ifndef VENTANA2_H
#define VENTANA2_H

#include <QDialog>

namespace Ui {
class ventana2;
}

class ventana2 : public QDialog
{
    Q_OBJECT

public:
    explicit ventana2(QWidget *parent = nullptr);
    ~ventana2();

private:
    Ui::ventana2 *ui;
};

#endif // VENTANA2_H
