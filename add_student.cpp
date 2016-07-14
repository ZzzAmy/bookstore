#include "add_student.h"
#include "ui_add_student.h"
#include "usrmag_student.h"

add_student::add_student(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::add_student)
{
    ui->setupUi(this);
}

add_student::~add_student()
{
    delete ui;
}

void add_student::on_pushButton_2_clicked()
{
    this->hide();
    usrmag_student a;
    a.exec();
}
