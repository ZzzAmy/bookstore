#include "change_student_info.h"
#include "ui_change_student_info.h"
#include "usrmag_student.h"

change_student_info::change_student_info(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::change_student_info)
{
    ui->setupUi(this);
}

change_student_info::~change_student_info()
{
    delete ui;
}

void change_student_info::on_pushButton_2_clicked()
{
    this->hide();
    usrmag_student a;
    a.exec();
}
