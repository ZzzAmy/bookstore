#include "bookinquiry_table.h"
#include "ui_bookinquiry_table.h"

bookinquiry_table::bookinquiry_table(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::bookinquiry_table)
{
    ui->setupUi(this);
}

bookinquiry_table::~bookinquiry_table()
{
    delete ui;
}
