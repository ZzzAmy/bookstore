#include "bookinfo_inquiry.h"
#include "ui_bookinfo_inquiry.h"

bookinfo_inquiry::bookinfo_inquiry(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::bookinfo_inquiry)
{
    ui->setupUi(this);
}

bookinfo_inquiry::~bookinfo_inquiry()
{
    delete ui;
}
