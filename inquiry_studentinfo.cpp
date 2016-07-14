#include "inquiry_studentinfo.h"
#include "ui_inquiry_studentinfo.h"
#include "inquiry_studentinfo_show.h"

inquiry_studentinfo::inquiry_studentinfo(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::inquiry_studentinfo)
{
    ui->setupUi(this);
}

inquiry_studentinfo::~inquiry_studentinfo()
{
    delete ui;
}

void inquiry_studentinfo::on_pushButton_clicked()//点击确定显示信息
{
    this->hide();
    inquiry_studentinfo_show a;
    a.exec();
}
