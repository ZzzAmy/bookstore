#include "isrenew.h"
#include "ui_isrenew.h"

Isrenew::Isrenew(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Isrenew)
{
    ui->setupUi(this);
}

Isrenew::~Isrenew()
{
    delete ui;
}
