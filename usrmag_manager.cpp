#include "usrmag_manager.h"
#include "ui_usrmag_manager.h"
#include "managerinfo_overall.h"
#include "change_manager_info.h"
#include "inquiry_manager.h"
#include "usrmanagement.h"
#include "add_manager.h"
#include "delete_manager.h"



usrmag_manager::usrmag_manager(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::usrmag_manager)
{
    ui->setupUi(this);
}

usrmag_manager::~usrmag_manager()
{
    delete ui;
}

void usrmag_manager::on_pushButton_clicked()
{
    this->hide();
    managerinfo_overall a;
    if(a.exec() == QDialog::Accepted)
    {

    }
}



void usrmag_manager::on_pushButton_2_clicked()
{
    this->hide();
    inquiry_manager a;
    a.exec();
}

void usrmag_manager::on_pushButton_6_clicked()
{
    this->hide();
    usrmanagement a;
    a.exec();

}

void usrmag_manager::on_pushButton_3_clicked()
{
    this->hide();
    Add_manager a;
    a.exec();

}

void usrmag_manager::on_pushButton_4_clicked()
{
    this->hide();
    change_manager_info a;
    a.exec();

}

void usrmag_manager::on_pushButton_5_clicked()
{
    this->hide();
    delete_manager a;
    a.exec();

}
