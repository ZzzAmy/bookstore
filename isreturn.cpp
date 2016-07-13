#include "isreturn.h"
#include "ui_isreturn.h"

Isreturn::Isreturn(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Isreturn)
{
    ui->setupUi(this);
}

Isreturn::~Isreturn()
{
    delete ui;
}

void Isreturn::on_pushButton_clicked()
{

}
