#include "reader.h"
#include "ui_reader.h"
#include "returnwindow.h"

Reader::Reader(Student *stu1,QWidget *parent) :
    QDialog(parent),stu(stu1),
    ui(new Ui::Reader)
{
    ui->setupUi(this);
}

Reader::~Reader()
{
    delete ui;
}

void Reader::on_pushButton_2_clicked()
{
    returnWindow a;
    if(a.exec() == QDialog::Accepted)
    {

    }
}
