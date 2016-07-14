#include "reader.h"
#include "ui_reader.h"
#include "book_search.h"

Reader::Reader(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Reader)
{
    ui->setupUi(this);
}

Reader::~Reader()
{
    delete ui;
}

void Reader::on_pushButton_2_clicked()
{
    book_search a;
    a.exec();
}
