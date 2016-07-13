#include "changedata.h"
#include "ui_changedata.h"

Changedata::Changedata(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Changedata)
{
    ui->setupUi(this);
}

Changedata::~Changedata()
{
    delete ui;
}

void Changedata::on_pushButton_clicked()
{

}
