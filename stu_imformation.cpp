#include "stu_imformation.h"
#include "ui_stu_imformation.h"

#include "mainwindow.h"
stu_imformation::stu_imformation(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::stu_imformation)
{
    ui->setupUi(this);
}

stu_imformation::~stu_imformation()
{
    delete ui;
}



void stu_imformation::on_return_main_clicked() //此处应该返回到借阅者的主界面（梦洢写的）
{

}
