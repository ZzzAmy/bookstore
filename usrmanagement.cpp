#include "usrmanagement.h"
#include "ui_usrmanagement.h"
#include "usrmag_manager.h"
#include "usrmag_student.h"
#include "manager.h"

usrmanagement::usrmanagement(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::usrmanagement)
{
    ui->setupUi(this);
}

usrmanagement::~usrmanagement()
{
    delete ui;
}

void usrmanagement::on_pushButton_2_clicked()
{
    this->hide();
    usrmag_student a;
    if(a.exec() == QDialog::Accepted)
    {

    }

}

void usrmanagement::on_pushButton_clicked()
{
    this->hide();
    usrmag_manager a;
    if(a.exec() == QDialog::Accepted)
    {

    }
}

void usrmanagement::on_pushButton_3_clicked()
{
    this->hide();
  //  manager a;
  //  a.exec();


}
