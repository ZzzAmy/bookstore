#ifndef Query_H
#define Query_H

#include "book_system.h"

class Query
{
    friend int login(int status, string *Msg, Student *stu, Administrator * adm, Handle_MySQL *vspdctomysql);
    friend void operate(int status, string *Msg, Handle_MySQL *vspdctomysql);
public:
    //构造函数\析构函数;
    Query() = default;
    ~Query(){}
public:
    //管理员信息查询函数--管理员;
    void admin_query(string *Msg, Administrator *adm, Handle_MySQL *vspdctomysql);
    //学生信息查询函数--学生;
    void student_query(Student *stu, string *Msg, Handle_MySQL *vspdctomysql);
    //学生信息查询函数--管理员;
    void student_query(string *Msg, Handle_MySQL *vspdctomysql);
    //图书信息查询函数--管理员/学生;
    void book_query(int order, string *Msg, Handle_MySQL *vspdctomysql);
    //关于信息显示函数(使用规则、借阅规则、系统信息）;
    void help_query(int order,string *Msg, Handle_MySQL *vspdctomysql);
};

#endif Query_H
