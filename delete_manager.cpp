#include "delete_manager.h"
#include "ui_delete_manager.h"

delete_manager::delete_manager(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::delete_manager)
{
    ui->setupUi(this);
}

delete_manager::~delete_manager()
{
    delete ui;
}
