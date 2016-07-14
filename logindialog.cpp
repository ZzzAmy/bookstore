#include "logindialog.h"
#include "ui_logindialog.h"
#include <QMessageBox>
#include "manager.h"
#include "reader.h"
#include "usrstatic.h"
#include <istream>
#include <string.h>
#include "handle_mysql.h"
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
    // 判断用户名和密码是否正确，
    // 如果错误则弹出警告对话框
        int current_index = this->ui->comboBox->currentIndex();
        manager m;
        Reader r;
//        QString host = "192.168.3.12";
//        QString user = "remoteuser";

//         unsigned int port = 3306;
//         QString password = "123456";
//         QString database = "book2";
//         QString charset = "utf8";

//        string s;
//        string *Msg = &s;

//        //初始化并连接数据库;
//        Handle_MySQL * vspdctomysql = new Handle_MySQL;
//        if (vspdctomysql->Conn_MySQL(host.toStdString().c_str(), user.toStdString().c_str(), password.toStdString().c_str(), database.toStdString().c_str(), port, charset.toStdString().c_str(), Msg) == 0)
//        {    qDebug()<<QObject::tr("success！");}
//        {
//            qDebug()<<"fail";
//        }
//        QString username = ui->usrLineEdit->text();
        QString passwd = ui->pwdLineEdit->text();

//        char SQL[2048];
//        char s3[2048];
//        string password1 = "password       \n";
//        password1 = password1 + passwd.toStdString() + "         \n";
//        sprintf(SQL, "select password from students where number ='%s'", username.toStdString().c_str());
//        qDebug()<<QString::fromLatin1(SQL);
//        string str = vspdctomysql->SelectData(SQL, Msg);
//        qDebug()<<QString::fromLatin1(str.c_str());

//         vspdctomysql->Close_MySQL_Conn();
//        // select(
        if(passwd == "123" )

        {
            if(current_index == 0)
            {
                this->hide();
                m.exec();
            }
            else
            {
                r.exec() ;

            }

        }
        else
         QMessageBox::warning(this, tr("Waring"),
                                tr("user name or password error!Please input again."),
                                                               QMessageBox::Yes);

}

