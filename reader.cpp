#include "reader.h"
#include "ui_reader.h"
#include "book_borrow.h"
#include "reader_inquiry.h"
#include "code_modify_stu.h"

Reader::Reader(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Reader)
{
    ui->setupUi(this);
}

Reader::~Reader()
{
    delete ui;
}

void Reader::on_pushButton_2_clicked()//借还系统
{
    book_borrow a;
    a.exec();
}

void Reader::on_pushButton_3_clicked()//查询系统
{
    reader_inquiry a;
    a.exec();
}

void Reader::on_pushButton_clicked()//密码修改
{
    code_modify_stu a;
    a.exec();
}
