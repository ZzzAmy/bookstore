#include "delete_student_input.h"
#include "ui_delete_student_input.h"
#include "delete_student.h"
Delete_student_input::Delete_student_input(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Delete_student_input)
{
    ui->setupUi(this);
}

Delete_student_input::~Delete_student_input()
{
    delete ui;
}

void Delete_student_input::on_pushButton_2_clicked()
{
    this->hide();
    delete_student a;
    a.exec();
}
