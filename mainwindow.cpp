#include "mainwindow.h"
#include "ui_mainwindow.h"

#include "search_book.h"
#include "book_borrow.h"
#include "stu_imformation.h"
#include "code_modify_stu.h"
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_2_clicked()
{
   search_book search;
   search.exec();
}

void MainWindow::on_pushButton_3_clicked()
{
    book_borrow borrow;
    borrow.exec();
}

void MainWindow::on_pushButton_clicked()
{
    stu_imformation stu;
    stu.exec();
}

void MainWindow::on_pushButton_4_clicked()
{
    code_modify_stu code;
    code.exec();
}
