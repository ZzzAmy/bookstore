#include "change_manager_info_input.h"
#include "ui_change_manager_info_input.h"
#include "change_manager_info.h"

change_manager_info_input::change_manager_info_input(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::change_manager_info_input)
{
    ui->setupUi(this);
}

change_manager_info_input::~change_manager_info_input()
{
    delete ui;
}

void change_manager_info_input::on_pushButton_2_clicked()
{
    this->hide();
    change_manager_info a;
    a.exec();
}
