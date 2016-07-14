#include "add_book_fail.h"
#include "ui_add_book_fail.h"

#include "add_books.h"
add_book_fail::add_book_fail(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::add_book_fail)
{
    ui->setupUi(this);
}

add_book_fail::~add_book_fail()
{
    delete ui;
}

void add_book_fail::on_re_add_clicked()
{
    add_books add;
    add.exec();
    this->hide();
}
