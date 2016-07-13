#ifndef HANDLE_MYSQL
#define HANDLE_MYSQL

#include <iostream>
#include <string>
#include <cstring>
#include <iomanip>
#include <winsock2.h>
#include "mysql.h"

using namespace std;

class Handle_MySQL
{
public:
    MYSQL mysql;

    //构造函数和稀构函数;
    Handle_MySQL();
    ~Handle_MySQL();
    int Conn_MySQL(const char *host, const char * user, const char* password,const char * database, unsigned int port, const char * charset, string * Msg);
    /*
    主要的功能:
    初始化数据库/连接数据库/设置字符集;

    入口参数:
    host ：MYSQL服务器IP;
    user：数据库用户;
    passwd：数据库用户的密码;
    database：数据库名称;
    port:数据库端口;
    charset：希望使用的字符集;
    Msg:string指针，反馈错误信息;

    出口参数:
    int:0表示成功,1表示失败;
    */

    string SelectData(char * SQL, string * Msg);
    /*
    主要的功能:
    查询数据;

    入口参数:
    SQL：查询的SQL语句;
    Msg:string指针，反馈错误信息;

    出口参数:
    string 存储查询获取的数据;
    */

    int InsertData(char * SQL, string* Msg);
    /*
    主要功能：
    插入数据;

    入口参数
    SQL：查询的SQL语句;
    Msg:string指针，反馈错误信息;

    出口参数：
    int：0表示成功，1表示失败;
    */

    int UpdateData(char * SQL, string * Msg);
    /*
    主要功能：
    修改数据;

    入口参数:
    SQL：查询的SQL语句;
    Msg:string指针，反馈错误信息;

    出口参数：
    int ：0表示成功，1表示失败;
    */


    int DeleteData(char * SQL, string * Msg);
    /*
    主要功能：
    删除数据;

    入口参数
    SQL：查询的SQL语句;
    Msg:string指针，反馈错误信息;

    出口参数：
    int ：0表示成功，1表示失败;
    */

    void Close_MySQL_Conn();
    /*
    主要功能：
    关闭数据库连接;
    */
};

#endif HANDLE_MYSQL
