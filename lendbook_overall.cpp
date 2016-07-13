#include "lendbook_overall.h"
#include "ui_lendbook_overall.h"

lendbook_overall::lendbook_overall(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::lendbook_overall)
{
    ui->setupUi(this);
}

lendbook_overall::~lendbook_overall()
{
    delete ui;
}
