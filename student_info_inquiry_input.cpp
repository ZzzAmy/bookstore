#include "student_info_inquiry_input.h"
#include "ui_student_info_inquiry_input.h"

student_info_inquiry_input::student_info_inquiry_input(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::student_info_inquiry_input)
{
    ui->setupUi(this);
}

student_info_inquiry_input::~student_info_inquiry_input()
{
    delete ui;
}
