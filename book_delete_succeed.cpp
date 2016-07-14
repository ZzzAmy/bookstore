#include "book_delete_succeed.h"
#include "ui_book_delete_succeed.h"

book_delete_succeed::book_delete_succeed(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::book_delete_succeed)
{
    ui->setupUi(this);
}

book_delete_succeed::~book_delete_succeed()
{
    delete ui;
}
