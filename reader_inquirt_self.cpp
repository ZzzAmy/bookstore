#include "reader_inquirt_self.h"
#include "ui_reader_inquirt_self.h"

reader_inquirt_self::reader_inquirt_self(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::reader_inquirt_self)
{
    ui->setupUi(this);
}

reader_inquirt_self::~reader_inquirt_self()
{
    delete ui;
}
