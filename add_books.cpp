#include "add_books.h"
#include "ui_add_books.h"

#include "add_book_succeed.h"
#include "add_book_fail.h"

add_books::add_books(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::add_books)
{
    ui->setupUi(this);
}

add_books::~add_books()
{
    delete ui;
}



void add_books::on_add_clicked()
{
    add_book_succeed succeed;
    add_book_fail fail;
    this->hide();
    if (this->ui->book_author_2->text().isEmpty()||this->ui->book_name_2->text().isEmpty()||this->ui->book_price_2->text().isEmpty()||
            this->ui->ISBN_2->text().isEmpty())
    {
        fail.exec();
    }
    else
    {
        succeed.exec();
    }
}
