#include "inquiry.h"
#include "ui_inquiry.h"
#include "selfinfo_inquiry.h"
#include "student_info_inquiry.h"
#include "bookinfo_inquiry.h"
#include "manager.h"

Inquiry::Inquiry(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Inquiry)
{
    ui->setupUi(this);
}

Inquiry::~Inquiry()
{
    delete ui;
}

void Inquiry::on_selfinfo_inquiry_clicked()
{
    this->hide();
    selfinfo_inquiry a;
    if(a.exec() == QDialog::Accepted)
    {


    }
}

void Inquiry::on_studentinfo_inquiry_clicked()
{
    this->hide();
    student_info_inquiry a;
    if(a.exec() == QDialog::Accepted)
    {

    }
}

void Inquiry::on_bookinfo_inquiry_clicked()
{
    this->hide();
    bookinfo_inquiry a;
    if(a.exec() == QDialog::Accepted)
    {

    }

}

void Inquiry::on_pushButton_clicked()
{
    this->hide();
    manager a;
    a.exec();
}
