#include "usrmag_student.h"
#include "ui_usrmag_student.h"
#include "studentinfo_overall.h"
#include "student_info_inquiry.h"
#include "add_student.h"
#include "change_student_info.h"
#include "delete_student.h"
#include "usrmanagement.h"
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

void usrmag_student::on_pushButton_clicked()//学生信息总览
{
    this->hide();
    studentinfo_overall a;
    if(a.exec() == QDialog::Accepted)
    {

    }
}

void usrmag_student::on_pushButton_2_clicked()//学生信息查询
{
    this->hide();
    student_info_inquiry a;
    a.exec();
}

void usrmag_student::on_pushButton_3_clicked()//添加学生
{
    add_student a;
    a.exec();
}

void usrmag_student::on_pushButton_4_clicked()//修改学生信息
{
    this->hide();
    change_student_info a;
    a.exec();
}

void usrmag_student::on_pushButton_5_clicked()//删除学生信息
{
    this->hide();
    delete_student a;
    a.exec();
}

void usrmag_student::on_pushButton_6_clicked()//返回
{
    this->hide();
    usrmanagement a;
    a.exec();
}
