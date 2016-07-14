#include "reader_inquiry.h"
#include "ui_reader_inquiry.h"

reader_inquiry::reader_inquiry(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::reader_inquiry)
{
    ui->setupUi(this);
}

reader_inquiry::~reader_inquiry()
{
    delete ui;
}
