#include "student_info_inquiry.h"
#include "ui_student_info_inquiry.h"
#include "student_info_inquiry_search.h"
#include "inquiry.h"

student_info_inquiry::student_info_inquiry(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::student_info_inquiry)
{
    ui->setupUi(this);
}

student_info_inquiry::~student_info_inquiry()
{
    delete ui;
}

void student_info_inquiry::on_pushButton_clicked()
{
    student_info_inquiry_search a;
    if(a.exec() == QDialog::Accepted)
    {

    }
}

void student_info_inquiry::on_pushButton_2_clicked()
{
    this->hide();
    Inquiry a;
    if(a.exec() == QDialog::Accepted)
    {

    }

}
