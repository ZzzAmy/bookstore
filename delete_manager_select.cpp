#include "delete_manager_select.h"
#include "ui_delete_manager_select.h"
#include "delete_manager.h"

delete_manager_select::delete_manager_select(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::delete_manager_select)
{
    ui->setupUi(this);
}

delete_manager_select::~delete_manager_select()
{
    delete ui;
}

void delete_manager_select::on_pushButton_2_clicked()
{
    this->hide();
    delete_manager a;
    a.exec();
}
