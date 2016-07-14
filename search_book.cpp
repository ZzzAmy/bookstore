#include "search_book.h"
#include "ui_search_book.h"

search_book::search_book(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::search_book)
{
    ui->setupUi(this);
}

search_book::~search_book()
{
    delete ui;
}

void search_book::on_book_search_bn_clicked() //查找图书界面
{
    int current_index = this->ui->book_search_box->currentIndex();
    if (current_index == 0)
    {
        this->ui->label->setText("you choose NO.1");
    }
    else if (current_index == 1)
    {
         this->ui->label->setText("you choose NO.2");
    }
    else
    {
         this->ui->label->setText("you choose NO.3");
    }
}
