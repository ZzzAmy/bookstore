#include "student_info_inquiry.h"
#include "ui_student_info_inquiry.h"

student_info_inquiry::student_info_inquiry(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::student_info_inquiry)
{
    ui->setupUi(this);
}

student_info_inquiry::~student_info_inquiry()
{
    delete ui;
}
