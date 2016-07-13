#include "inquiry_manager.h"
#include "ui_inquiry_manager.h"

inquiry_manager::inquiry_manager(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::inquiry_manager)
{
    ui->setupUi(this);
}

inquiry_manager::~inquiry_manager()
{
    delete ui;
}
