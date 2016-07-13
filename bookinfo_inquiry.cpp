#include "bookinfo_inquiry.h"
#include "ui_bookinfo_inquiry.h"
#include "lendbook_overall.h"
#include "QComboBox.h"
#include "QLineEdit.h"
#include "bookinquiry_table.h"
#include "inquiry.h"


bookinfo_inquiry::bookinfo_inquiry(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::bookinfo_inquiry)
{
    ui->setupUi(this);
}

bookinfo_inquiry::~bookinfo_inquiry()
{
    delete ui;
}

void bookinfo_inquiry::on_pushButton_2_clicked()
{
    lendbook_overall a;
    if(a.exec() == QDialog::Accepted)
    {

    }
}


void bookinfo_inquiry::on_pushButton_clicked()
{
    int index = this->ui->comboBox->currentIndex();
    QString inquiry_data = ui->lineEdit->text();  // 管理员输入的信息
    bookinquiry_table a;
    if(index == 0) //单本图书查询
    {
        a.exec();
    }
    else if(index == 1) //按书名查询
    {
        a.exec();
    }
    else //按作者查询
    {
        a.exec();
    }
}

void bookinfo_inquiry::on_pushButton_3_clicked()
{
    this->hide();
    //Inquiry a;
    //a.exec();
}
