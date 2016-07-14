#include "code_modify_succeed.h"
#include "ui_code_modify_succeed.h"

code_modify_succeed::code_modify_succeed(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::code_modify_succeed)
{
    ui->setupUi(this);
}

code_modify_succeed::~code_modify_succeed()
{
    delete ui;
}
