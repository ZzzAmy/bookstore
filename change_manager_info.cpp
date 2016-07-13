#include "change_manager_info.h"
#include "ui_change_manager_info.h"

change_manager_info::change_manager_info(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::change_manager_info)
{
    ui->setupUi(this);
}

change_manager_info::~change_manager_info()
{
    delete ui;
}
