#include "inquiry_studentinfo_show.h"
#include "ui_inquiry_studentinfo_show.h"

inquiry_studentinfo_show::inquiry_studentinfo_show(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::inquiry_studentinfo_show)
{
    ui->setupUi(this);
}

inquiry_studentinfo_show::~inquiry_studentinfo_show()
{
    delete ui;
}
