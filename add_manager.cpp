#include "add_manager.h"
#include "ui_add_manager.h"
#include "usrmag_manager.h"

Add_manager::Add_manager(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Add_manager)
{
    ui->setupUi(this);
}

Add_manager::~Add_manager()
{
    delete ui;
}

void Add_manager::on_pushButton_2_clicked()
{
    this->hide();
    usrmag_manager a;
    a.exec();
}
