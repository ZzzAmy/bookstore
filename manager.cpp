#include "manager.h"
#include "ui_manager.h"
#include "inquiry.h"
#include "bookinfo_inquiry.h"
#include "usrmanagement.h"

manager::manager(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::manager)
{
    ui->setupUi(this);
}

manager::~manager()
{
    delete ui;
}

void manager::on_inquiryBtn_clicked()
{
    this->hide();
    Inquiry a;
    if(a.exec() == QDialog::Accepted)
    {

    }
}

void manager::on_bookmanageBtn_clicked()
{
    this->hide();
    bookinfo_inquiry a;
    if(a.exec() == QDialog::Accepted)
    {

    }
}

void manager::on_usrmanageBtn_clicked()
{
    this->hide();
    usrmanagement a;
    if(a.exec() == QDialog::Accepted)
    {

    }
}
