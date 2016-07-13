#include "returnwindow.h"
#include "ui_returnwindow.h"
#include "isreturn.h"

returnWindow::returnWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::returnWindow)
{
    ui->setupUi(this);
}

returnWindow::~returnWindow()
{
    delete ui;
}

void returnWindow::on_pushButton_clicked()
{
    Isreturn a;
    if(a.exec() == QDialog::Accepted)
    {


    }
}
