#include "studentinfo_overall.h"
#include "ui_studentinfo_overall.h"
#include "studentinfo_overall_show.h"
#include "usrmag_student.h"

studentinfo_overall::studentinfo_overall(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::studentinfo_overall)
{
    ui->setupUi(this);
}

studentinfo_overall::~studentinfo_overall()
{
    delete ui;
}

void studentinfo_overall::on_pushButton_clicked()
{
    studentinfo_overall_show num_up;
    num_up.exec();
}

void studentinfo_overall::on_pushButton_2_clicked()
{
    studentinfo_overall_show num_down;
    num_down.exec();
}

void studentinfo_overall::on_pushButton_3_clicked()
{
    studentinfo_overall_show name_up;
    name_up.exec();
}

void studentinfo_overall::on_pushButton_4_clicked()
{
    studentinfo_overall_show name_down;
    name_down.exec();
}

void studentinfo_overall::on_pushButton_5_clicked()
{
    this->hide();
    usrmag_student a;
    if(a.exec() == QDialog::Accepted)
    {

    }
}

