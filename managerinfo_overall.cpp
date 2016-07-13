#include "managerinfo_overall.h"
#include "ui_managerinfo_overall.h"
#include "managerinfo_overall_show.h"
#include "usrmag_manager.h"

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

void managerinfo_overall::on_pushButton_clicked()
{
    managerinfo_overall_show num_up;
    num_up.exec();
}

void managerinfo_overall::on_pushButton_2_clicked()
{
    managerinfo_overall_show num_down;
    num_down.exec();
}

void managerinfo_overall::on_pushButton_3_clicked()
{
    managerinfo_overall_show name_up;
    name_up.exec();
}

void managerinfo_overall::on_pushButton_4_clicked()
{
    managerinfo_overall_show name_down;
    name_down.exec();
}

void managerinfo_overall::on_pushButton_5_clicked()
{
    this->hide();
    usrmag_manager a;
    a.exec();
}
