#include "selfinfo_inquiry.h"
#include "ui_selfinfo_inquiry.h"
#include "inquiry.h"

selfinfo_inquiry::selfinfo_inquiry(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::selfinfo_inquiry)
{
    ui->setupUi(this);
    //query.exec("select *from book2 where id=26");

}

selfinfo_inquiry::~selfinfo_inquiry()
{
    delete ui;
}

void selfinfo_inquiry::on_pushButton_clicked()
{
    this->hide();
    Inquiry a;
    a.exec();

}
