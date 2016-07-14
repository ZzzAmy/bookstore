#include "code_modify_stu_2.h"
#include "ui_code_modify_stu_2.h"

code_modify_stu_2::code_modify_stu_2(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::code_modify_stu_2)
{
    ui->setupUi(this);
}

code_modify_stu_2::~code_modify_stu_2()
{
    delete ui;
}

void code_modify_stu_2::on_pushButton_clicked()//密码确认修改，加的功能是如果两个ID或密码不相同则显示修改失败
{
    QString ID = this->ui->stu_ID->text();
    QString code = this->ui->new_code->text();
    QString ID2 = this->ui->stu_ID_2->text();
    QString code2 = this->ui->new_code_2->text();
    QFont ft;
    ft.setPointSize(12);
    if (ID == ID2 && code == code2)
    {
        this->ui->code_new->setText("修改成功");
        this->ui->code_new->setFont(ft);
    }
    else
    {
        this->ui->code_new->setText("修改失败");
        this->ui->code_new->setFont(ft);
    }
}
