#include "manager.h"
#include "ui_manager.h"
#include "inquiry.h"
#include "bookinfo_inquiry.h"
#include "usrmanagement.h"
#include "book_manage.h"
#include "code_manage.h"
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

void manager::on_bookmanageBtn_clicked()//图书管理
{
    book_manage a;
    a.exec();
}

void manager::on_usrmanageBtn_clicked()
{
    this->hide();
    usrmanagement a;
    if(a.exec() == QDialog::Accepted)
    {

    }
}

void manager::on_pwdmanageBtn_clicked()//密码管理
{
    code_manage a;
    a.exec();

}
