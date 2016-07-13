#include "lendtime.h"
#include "ui_lendtime.h"

lendtime::lendtime(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::lendtime)
{
    ui->setupUi(this);
}

lendtime::~lendtime()
{
    delete ui;
}
