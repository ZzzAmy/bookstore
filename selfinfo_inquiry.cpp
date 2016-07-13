#include "selfinfo_inquiry.h"
#include "ui_selfinfo_inquiry.h"

selfinfo_inquiry::selfinfo_inquiry(Administrator *adm1,QWidget *parent) :
    QDialog(parent),adm(adm1),
    ui(new Ui::selfinfo_inquiry)
{

    ui->setupUi(this);
    vspdctomysql->Conn_MySQL(host.toStdString().c_str(), user.toStdString().c_str(), password.toStdString().c_str(), database.toStdString().c_str(), port, charset.toStdString().c_str(), Msg);
    Query *query=new Query;
    string str=query->admin_query(Msg, adm,vspdctomysql);
    ui->label->setText(QString::fromStdString(str));
    vspdctomysql->Close_MySQL_Conn();
    delete query;
}

selfinfo_inquiry::~selfinfo_inquiry()
{
    delete ui;
}
