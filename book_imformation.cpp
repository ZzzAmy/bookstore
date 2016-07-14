#include "book_imformation.h"
#include "ui_book_imformation.h"

#include "search_book.h"
book_imformation::book_imformation(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::book_imformation)
{
    ui->setupUi(this);
}

book_imformation::~book_imformation()
{
    delete ui;
}

void book_imformation::on_return_book_clicked() //图书信息显示界面的返回键
{
    search_book search;
    search.exec();
    this->hide();
}
