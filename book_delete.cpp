#include "book_delete.h"
#include "ui_book_delete.h"

#include "book_delete_succeed.h"
#include "book_delete_fail.h"
book_delete::book_delete(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::book_delete)
{
    ui->setupUi(this);
}

book_delete::~book_delete()
{
    delete ui;
}

void book_delete::on_pushButton_clicked()
{
    book_delete_succeed succeed;
    book_delete_fail fail;
    if (this->ui->book_name_d_2->text().isEmpty()||this->ui->ISBN_d_2->text().isEmpty())
    {
        fail.exec();
        this->hide();
    }
    else
    {
        succeed.exec();
        this->hide();
    }
}
