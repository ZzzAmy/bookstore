#include "islend.h"
#include "ui_islend.h"

Islend::Islend(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Islend)
{
    ui->setupUi(this);
}

Islend::~Islend()
{
    delete ui;
}
