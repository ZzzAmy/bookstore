#include "logindialog.h"
#include "ui_logindialog.h"
#include <QMessageBox>
#include "manager.h"
#include "reader.h"
#include "usrstatic.h"
#include "book_header.h"

#include <istream>
#include <string.h>
#include "book_handle_mysql.h"
#include <QDebug>

LoginDialog::LoginDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::LoginDialog)
{
    ui->setupUi(this);
}

LoginDialog::~LoginDialog()
{
    delete ui;
}

void LoginDialog::on_loginBtn_clicked()
{
    // 判断用户名和密码是否正确,如果错误则弹出警告对话框;

    //建立两个窗口对象;
    Student *stu=new Student;
    Administrator *adm=new Administrator;
    vspdctomysql->Conn_MySQL(host.toStdString().c_str(), user.toStdString().c_str(), password.toStdString().c_str(), database.toStdString().c_str(), port, charset.toStdString().c_str(), Msg);

    QString number= ui->numLineEdit->text();
    QString username = ui->usrlineEdit->text();
    QString passwd = ui->pwdLineEdit->text();
    int current_index = this->ui->comboBox->currentIndex();//下拉列表，从0开始计数,获取身份;

    char SQL[2048];

    string password1 = "password       \n";
    password1 = password1 + passwd.toStdString() + "         \n";

    string str;
    if(current_index==1)
    {
        sprintf(SQL, "select password from students where number ='%s'", number.toStdString().c_str());
        str = vspdctomysql->SelectData(SQL, Msg);
        stu->student_name=username.toStdString();
        stu->student_num=number.toStdString();
    }
    else
    {
        sprintf(SQL, "select password from administrators where number ='%s'", number.toStdString().c_str());
        str = vspdctomysql->SelectData(SQL, Msg);
        adm->administrator_name=username.toStdString();
        adm->administrator_num=number.toStdString();
    }
    vspdctomysql->Close_MySQL_Conn();
    if(password1 == str )
    {
        if(current_index == 0)
        {
            manager m(adm,NULL);
            this->hide();
            m.exec();
        }
        else
        {
            Reader r(stu,NULL);
            this->hide();
            r.exec() ;

        }
    }
    else
    QMessageBox::warning(this, tr("Waring"),tr("user name or password error!Please input again."),QMessageBox::Yes);
}

