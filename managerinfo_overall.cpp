#include "managerinfo_overall.h"
#include "ui_managerinfo_overall.h"

managerinfo_overall::managerinfo_overall(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::managerinfo_overall)
{
    ui->setupUi(this);
}

managerinfo_overall::~managerinfo_overall()
{
    delete ui;
}
