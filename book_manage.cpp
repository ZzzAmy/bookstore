#include "book_manage.h"
#include "ui_book_manage.h"

#include "add_books.h"
#include "book_delete.h"
book_manage::book_manage(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::book_manage)
{
    ui->setupUi(this);
}

book_manage::~book_manage()
{
    delete ui;
}


void book_manage::on_add_book_clicked()
{
    add_books add_b;
    add_b.exec();
    this->hide();
}

void book_manage::on_delete_book_clicked()
{
    book_delete delete_b;
    if (delete_b.exec() == QDialog::Accepted)
    {

    }
}
