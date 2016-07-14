#include "book_borrow.h"
#include "ui_book_borrow.h"


book_borrow::book_borrow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::book_borrow)
{
    ui->setupUi(this);
}

book_borrow::~book_borrow()
{
    delete ui;
}

void book_borrow::on_borrow_clicked() //借还系统界面
{
    QFont ft;
    ft.setPointSize(12);
    if (this->ui->book_ISBN->text().isEmpty()||this->ui->book_name_edit->text().isEmpty())//如果输入中有没有输入的，则显示输入不能为空
    {
        this->ui->imformation->setText("编号/名称不能为空");
        this->ui->imformation->setFont(ft);
    }
    else//根据下拉列表中显示的显示是否成功
    {
        int index = this->ui->book_status->currentIndex();
        switch (index) {
        case 0:
        {
            this->ui->imformation->setText("成功");
            this->ui->imformation->setFont(ft);
            break;
        }
        case 1:
        {
            this->ui->imformation->setText("成功");
            this->ui->imformation->setFont(ft);
            break;
        }
        case 2:
        {
            this->ui->imformation->setText("成功");
            this->ui->imformation->setFont(ft);
            break;
        }
        case 3:
        {
            this->ui->imformation->setText("成功");
            this->ui->imformation->setFont(ft);
            break;
        }
        default:
            break;
        }
    }
}
