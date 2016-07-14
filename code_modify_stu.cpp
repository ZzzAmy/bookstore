#include "code_modify_stu.h"
#include "ui_code_modify_stu.h"

#include "code_modify_stu_2.h"
code_modify_stu::code_modify_stu(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::code_modify_stu)
{
    ui->setupUi(this);
}

code_modify_stu::~code_modify_stu()
{
    delete ui;
}

void code_modify_stu::on_pushButton_clicked()//修改密码，转换到输入新密码的界面
{
    code_modify_stu_2 code;
    code.exec();
    this->hide();
}
