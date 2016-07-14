#include "delete_manager.h"
#include "ui_delete_manager.h"
#include "usrmag_manager.h"
#include "QMessageBox"
#include "delete_manager_select.h"
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

void delete_manager::on_pushButton_2_clicked()
{
    this->hide();
    usrmag_manager a;
    a.exec();
}

void delete_manager::on_pushButton_clicked()
{
    QString num = this->ui->lineEdit->text();
    QString pwd = this->ui->lineEdit_2->text();

    if(num == "123" && pwd == "123")
    {
        this->hide();
        delete_manager_select a;
        a.exec();
    }
    else
    {
        QMessageBox::warning(this,tr("Waring"),tr("user name or password error!Please input again."),QMessageBox::Yes);

    }
}
