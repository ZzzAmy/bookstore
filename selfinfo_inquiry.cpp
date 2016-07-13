#include "selfinfo_inquiry.h"
#include "ui_selfinfo_inquiry.h"

selfinfo_inquiry::selfinfo_inquiry(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::selfinfo_inquiry)
{
    ui->setupUi(this);
    ui->label->showText();
}

selfinfo_inquiry::~selfinfo_inquiry()
{
    delete ui;
}
