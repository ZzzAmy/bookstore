#include "usrmag_student.h"
#include "ui_usrmag_student.h"
#include "student_info_inquiry.h"

usrmag_student::usrmag_student(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::usrmag_student)
{
    ui->setupUi(this);
}

usrmag_student::~usrmag_student()
{
    delete ui;
}

void usrmag_student::on_pushButton_clicked()
{
    student_info_inquiry a;
    if(a.exec() == QDialog::Accepted)
    {

    }

}
