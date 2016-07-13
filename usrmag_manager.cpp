#include "usrmag_manager.h"
#include "ui_usrmag_manager.h"
#include "managerinfo_overall.h"
#include "change_manager_info.h"

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
    managerinfo_overall a;
    if(a.exec() == QDialog::Accepted)
    {

    }
}

void usrmag_manager::on_pushButton_4_clicked()
{
    change_manager_info a;
    if(a.exec() == QDialog::Accepted)
    {

    }
}
