#include "code_modify_fail.h"
#include "ui_code_modify_fail.h"

#include "code_manage.h"
code_modify_fail::code_modify_fail(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::code_modify_fail)
{
    ui->setupUi(this);
}

code_modify_fail::~code_modify_fail()
{
    delete ui;
}

void code_modify_fail::on_re_modify_clicked()
{
    code_manage code;
    code.exec();
}
