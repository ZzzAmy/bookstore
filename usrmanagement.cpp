#include "usrmanagement.h"
#include "ui_usrmanagement.h"
#include "usrmag_manager.h"

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

void usrmanagement::on_pushButton_clicked()
{
     usrmag_manager a;
     if(a.exec() == QDialog::Accepted)
     {

     }
}
