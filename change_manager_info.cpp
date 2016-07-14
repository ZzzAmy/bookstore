#include "change_manager_info.h"
#include "ui_change_manager_info.h"
#include "usrmag_manager.h"
#include "QMessageBox"
#include "change_manager_info_input.h"

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

void change_manager_info::on_pushButton_3_clicked()
{
    this->hide();
    usrmag_manager a;
    a.exec();
}

void change_manager_info::on_pushButton_clicked()
{
    QString num = ui->lineEdit->text();
    QString pwd = ui->lineEdit_2->text();

    if(num == "123" && pwd == "123")
    {
        this->hide();
        change_manager_info_input a;
        if(a.exec() == QDialog::Accepted)
        {

        }

    }
    else
    {
        QMessageBox::warning(this, tr("Waring"),
                               tr("user name or password error!Please input again."),
                                                              QMessageBox::Yes);
}

}
