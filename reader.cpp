#include "reader.h"
#include "ui_reader.h"
#include "returnwindow.h"

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
    returnWindow a;
    if(a.exec() == QDialog::Accepted)
    {

    }
}
