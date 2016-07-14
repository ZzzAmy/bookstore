#include "inquiry_manager.h"
#include "ui_inquiry_manager.h"
#include "usrmag_manager.h"
#include <QMessageBox>
#include "inquiry_manager_show.h"

inquiry_manager::inquiry_manager(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::inquiry_manager)
{
    ui->setupUi(this);
}

inquiry_manager::~inquiry_manager()
{
    delete ui;
}

void inquiry_manager::on_pushButton_2_clicked()
{
    this->hide();
    usrmag_manager a;
    a.exec();
}

void inquiry_manager::on_pushButton_clicked()
{
    QString num = ui->lineEdit->text();
    QString name = ui->lineEdit_2->text();
    if(num == "123" && name == "Mary")
    {
        inquiry_manager_show a;
        a.exec();
    }
    else
    {
        QMessageBox::warning(this, tr("Waring"),
                               tr("The information you just input was not correct!."),
                                                              QMessageBox::Yes);

    }

}
