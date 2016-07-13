#include "student_info_inquiry_search.h"
#include "ui_student_info_inquiry_search.h"

student_info_inquiry_search::student_info_inquiry_search(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::student_info_inquiry_search)
{
    ui->setupUi(this);
}

student_info_inquiry_search::~student_info_inquiry_search()
{
    delete ui;
}
