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
    Inquiry a;
    if(a.exec() == QDialog::Accepted)
    {

    }
}

void manager::on_bookmanageBtn_clicked()
{
    bookinfo_inquiry a;
    if(a.exec() == QDialog::Accepted)
    {

    }
}

void manager::on_usrmanageBtn_clicked()
{
    usrmanagement a;
    if(a.exec() == QDialog::Accepted)
    {

    }
}
