#include "code_manage.h"
#include "ui_code_manage.h"

#include "code_modify_succeed.h"
code_manage::code_manage(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::code_manage)
{
    ui->setupUi(this);
}

code_manage::~code_manage()
{
    delete ui;
}

void code_manage::on_modify_code_clicked()
{
    code_modify_succeed succeed;
    succeed.exec();
}
