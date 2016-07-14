#include "student_info_inquiry.h"
#include "ui_student_info_inquiry.h"
#include "student_info_inquiry_input.h"
#include "usrmag_student.h"
#include "QMessageBox.h"

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

void student_info_inquiry::on_pushButton_clicked()
{
    this->hide();

    student_info_inquiry_input a;
    a.exec();




}

void student_info_inquiry::on_pushButton_2_clicked()
{
    this->hide();
    usrmag_student a;
    a.exec();
}
