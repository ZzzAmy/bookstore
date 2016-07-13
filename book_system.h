#ifndef SYSTEM_MANAGEMENT
#define SYSTEM_MANAGEMENT

#include "handle_mysql.h"

class Administrator;
//学生类;
class Student
{
    //友函数;
    friend void Get_QSL(Student* stu, char *SQL);
    friend void target_student(Student * stu);
    friend int login(int status, string *Msg, Student *stu, Administrator * adm, Handle_MySQL *vspdctomysql);
    friend void operate(int status, string *Msg, Handle_MySQL *vspdctomysql);
    //友类;
    friend class Password_management;
    friend class Book_management;
    friend class Query;
    friend class Administrator;
public:
    //构造函数,析构函数;
    Student() = default;
    ~Student() {}
public:
    //学生信息录入函数;
    void Input_stu_information(int input_order);
private:
    int student_age = 0;
    string student_num;
    string student_name;
    string student_class;
    string student_password;
    string borrowed_book1;
    string borrowed_book2;
};

//管理员类;
class Administrator
{
    //友函数;
    friend void Get_QSL(Administrator* adm, char *SQL);
    friend int login(int status, string *Msg, Student *stu, Administrator * adm, Handle_MySQL *vspdctomysql);
    friend void operate(int status, string *Msg, Handle_MySQL *vspdctomysql);
    //友类;
    friend class Password_management;
    friend class Book_management;
    friend class Query;
    friend class Administrator;
public:
    //构造函数,析构函数;
    Administrator() = default;
    ~Administrator() {}

public:
    //管理员信息录入函数;
    void Input_adm_information(int input_order);

private:
    int administrator_age = 0;
    string administrator_num;
    string administrator_name;
    string administrator_password;
};

//学生管理类;
class Stu_management
{
    friend class Query;
public:
    //构造函数、析构函数;
    Stu_management() = default;
    ~Stu_management() {}
    //Student_添加用户;
    void Add_student(string *Msg, Handle_MySQL * vspdctomysql);
    //学生信息排序函数;
    void Information_sorting(int order, string *Msg, Handle_MySQL * vspdctomysql);
    //学生信息查询函数;
    void Information_inquire(string *Msg, Handle_MySQL * vspdctomysql);
    //学生信息修改函数;
    void Information_update(int order, string *Msg, Handle_MySQL * vspdctomysql);
    //学生信息删除函数;
    void Information_delete(string *Msg, Handle_MySQL * vspdctomysql);

};

//管理员信息管理类;
class Adm_management
{
public:
    //构造函数、析构函数;
    Adm_management() = default;
    ~Adm_management() {}
    //Administrator_添加用户;
    void Add_administrator(string *Msg, Handle_MySQL * vspdctomysql);
    //管理员信息排序函数;
    void Information_sorting(int order, string *Msg, Handle_MySQL * vspdctomysql);
    //管理员信息查询函数;
    void Information_inquire(string *Msg, Handle_MySQL * vspdctomysql);
    //管理员信息修改函数;
    void Information_update(int order, string *Msg, Handle_MySQL * vspdctomysql);
    //管理员信息删除函数;
    void Information_delete(string *Msg, Handle_MySQL * vspdctomysql);
};

//密码管理类;
class Password_management
{
public:
    //构造函数、析构函数;
    Password_management() = default;
    ~Password_management() {}
    //密码设置函数;
    void set_password(int status, string *Msg, Handle_MySQL *vspdctomysql);
    //密码修改函数;
    void reset_password(int status, string *Msg, Handle_MySQL *vspdctomysql);
    //密码找回函数;
    void seek_password(int status, string *Msg, Handle_MySQL *vspdctomysql);
};

#endif SYSTEM_MANAGEMENT
