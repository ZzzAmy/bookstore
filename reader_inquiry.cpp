#include "reader_inquiry.h"
#include "ui_reader_inquiry.h"
#include "stu_imformation.h"
#include "search_book.h"
#include "reader.h"
reader_inquiry::reader_inquiry(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::reader_inquiry)
{
    ui->setupUi(this);
}

reader_inquiry::~reader_inquiry()
{
    delete ui;
}

void reader_inquiry::on_pushButton_clicked()//个人图书信息查询
{
    this->hide();
    stu_imformation a;
    a.exec();
}

void reader_inquiry::on_pushButton_2_clicked()//图书信息查询
{
    this->hide();
    search_book a;
    a.exec();
}

void reader_inquiry::on_pushButton_3_clicked()
{
    this->hide();
    Reader a;
    a.exec();

}
