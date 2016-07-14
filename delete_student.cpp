#include "delete_student.h"
#include "ui_delete_student.h"
#include "usrmag_student.h"
#include "delete_student_input.h"
#include "QMessageBox.h"
delete_student::delete_student(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::delete_student)
{
    ui->setupUi(this);
}

delete_student::~delete_student()
{
    delete ui;
}

void delete_student::on_pushButton_2_clicked()//返回到学生管理菜单
{
    this->hide();
    usrmag_student a;
    a.exec();
}

void delete_student::on_pushButton_clicked()//判断输入的用户名，密码是否正确，正确跳转是否删除，不正确重新输入
{
    QString num = this->ui->lineEdit->text();
    QString name = this->ui->lineEdit_2->text();
    if(num== "123" && name == "123")
    {
        this->hide();
        Delete_student_input a;
        a.exec();
    }
    else
    {
        QMessageBox::warning(this,tr("warning"),tr("user name or password error!Please input again."),QMessageBox::Yes);

    }
}
