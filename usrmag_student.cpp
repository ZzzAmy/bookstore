#include "usrmag_student.h"
#include "ui_usrmag_student.h"
#include "studentinfo_overall.h"

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
//    this->hide();
//    studentinfo_overall a;
//    if(a.exec() == QDialog::Accepted)
//    {

//    }
}
