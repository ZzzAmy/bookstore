#include "book_search.h"
#include "ui_book_search.h"

book_search::book_search(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::book_search)
{
    ui->setupUi(this);
}

book_search::~book_search()
{
    delete ui;
}
