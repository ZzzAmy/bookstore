#include "inquiry.h"
#include "ui_inquiry.h"
#include "selfinfo_inquiry.h"
#include "student_info_inquiry.h"

Inquiry::Inquiry(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Inquiry)
{
    ui->setupUi(this);
}

Inquiry::~Inquiry()
{
    delete ui;
}

void Inquiry::on_selfinfo_inquiry_clicked()
{
    selfinfo_inquiry a;
    if(a.exec() == QDialog::Accepted)
    {


    }
}

void Inquiry::on_studentinfo_inquiry_clicked()
{
    student_info_inquiry a;
    if(a.exec() == QDialog::Accepted)
    {

    }
}
