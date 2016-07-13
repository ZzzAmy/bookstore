#include "managerinfo_overall_show.h"
#include "ui_managerinfo_overall_show.h"

managerinfo_overall_show::managerinfo_overall_show(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::managerinfo_overall_show)
{
    ui->setupUi(this);
}

managerinfo_overall_show::~managerinfo_overall_show()
{
    delete ui;
}
