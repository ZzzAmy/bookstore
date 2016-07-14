#include "studentinfo_overall_show.h"
#include "ui_studentinfo_overall_show.h"

studentinfo_overall_show::studentinfo_overall_show(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::studentinfo_overall_show)
{
    ui->setupUi(this);
}

studentinfo_overall_show::~studentinfo_overall_show()
{
    delete ui;
}
