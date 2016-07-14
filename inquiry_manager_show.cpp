#include "inquiry_manager_show.h"
#include "ui_inquiry_manager_show.h"

inquiry_manager_show::inquiry_manager_show(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::inquiry_manager_show)
{
    ui->setupUi(this);
}

inquiry_manager_show::~inquiry_manager_show()
{
    delete ui;
}
