#include "book_delete_fail.h"
#include "ui_book_delete_fail.h"

#include "book_delete.h"
book_delete_fail::book_delete_fail(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::book_delete_fail)
{
    ui->setupUi(this);
}

book_delete_fail::~book_delete_fail()
{
    delete ui;
}

void book_delete_fail::on_return_d_f_clicked()
{
    book_delete del;
    del.exec();
    this->hide();

}
