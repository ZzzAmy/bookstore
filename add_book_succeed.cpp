#include "add_book_succeed.h"
#include "ui_add_book_succeed.h"

#include "book_manage.h"
#include "add_books.h"

add_book_succeed::add_book_succeed(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::add_book_succeed)
{
    ui->setupUi(this);
}

add_book_succeed::~add_book_succeed()
{
    delete ui;
}


void add_book_succeed::on_continue_add_clicked()
{
    add_books add;
    this->hide();
    if (add.exec() == QDialog::Accepted)
    {
        this->show();
    }
}

void add_book_succeed::on_return_2_clicked()
{
    book_manage manage;
    this->hide();
    if (manage.exec() == QDialog::Accepted)
    {

    }
}
