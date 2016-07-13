#include "book_query.h"
#include "book_book_system.h"

//管理员信息查询函数--管理员;
string Query::admin_query(string *Msg,Administrator *adm, Handle_MySQL *vspdctomysql)
{
    //显示除密码以外的其他信息,只能查自己的信息;
    char s[2048], SQL[2048];
    strcpy(s, (adm->administrator_num).c_str());
    sprintf(SQL, "select number,name,age from administrators where number = '%s'", s);
    string str = vspdctomysql->SelectData(SQL, Msg);
    return str;
}

//学生信息查询函数--学生;
void Query::student_query( Student* stu,string *Msg, Handle_MySQL *vspdctomysql)
{
    //显示除密码以外的其他信息,只能查自己的信息;
    char s[2048], SQL[2048];
    strcpy(s, (stu->student_num).c_str());
    sprintf(SQL, "select number,name,class,age,borrowedbook1,borrowedbook2 from students where number = '%s'", s);
    string str = vspdctomysql->SelectData(SQL, Msg);
    cout << str;
}

//学生信息查询函数--管理员;
void Query::student_query(string *Msg, Handle_MySQL *vspdctomysql)
{
    Stu_management *manage = new Stu_management;
    manage->Information_inquire(Msg, vspdctomysql);
    delete manage;
}

//图书信息查询函数--管理员/学生;
void Query::book_query(int order, string *Msg, Handle_MySQL *vspdctomysql)
{
    //order 1学生查单本图书2学生/管理员按照书名查3学生/管理员按照作者查4管理员查单本5管理员查借阅统计;
    switch (order)
    {
       case 1:
       {
           //显示除借书人的以外的所有信息;
           cout << "Please input the book_isbn and book_name:" << endl;
           string isbn, name;
           cin >> isbn >> name;
           char s[2048], SQL[2048];
           strcpy(s, isbn.c_str());
           sprintf(SQL, "select isbn,name,author,price,putawaydate,storagestatus,borrowstatus,preborrowstatus from books where isbn='%s'", s);
           string str = vspdctomysql->SelectData(SQL, Msg);
           if (str.size() > 140)
               cout << str << endl;
           else
               cout << "There is not the book you want to find!" << endl;
           break;
       }
       case 2:
       {
           cout << "Please input the book_name:" << endl;
           string name;
           cin >> name;
           char s[2048], SQL[2048];
           strcpy(s, name.c_str());
           sprintf(SQL, "select isbn,name,author,price,putawaydate,storagestatus,borrowstatus,preborrowstatus from books where name='%s'", s);
           string str = vspdctomysql->SelectData(SQL, Msg);
           if (str.size() > 140)
               cout << str << endl;
           else
               cout << "There is not the book you want to find!" << endl;
           break;
       }
       case 3:
       {
           cout << "Please input the author:" << endl;
           string author;
           cin >> author;
           char s[2048], SQL[2048];
           strcpy(s, author.c_str());
           sprintf(SQL, "select isbn,name,author,price,putawaydate,storagestatus,borrowstatus,preborrowstatus from books where author='%s'", s);
           string str = vspdctomysql->SelectData(SQL, Msg);
           if (str.size() > 140)
               cout << str << endl;
           else
               cout << "There is not the book you want to find!" << endl;
           break;
       }
       case 4:
       {
           //显示全部信息;
           cout << "Please input the book_isbn and book_name:" << endl;
           string isbn, name;
           cin >> isbn >> name;
           char s[2048], SQL[2048];
           strcpy(s, isbn.c_str());
           sprintf(SQL, "select * from books where isbn='%s'", s);
           string str = vspdctomysql->SelectData(SQL, Msg);
           if (str.size() > 140)
               cout << str << endl;
           else
               cout << "There is not the book you want to find!" << endl;
           break;
       }
       case 5:
       {
           char SQL[2048];
           sprintf(SQL, "select * from books where borrowstatus='Was_borrowed'");
           string str = vspdctomysql->SelectData(SQL, Msg);
           if (str.size() > 140)
               cout << str << endl;
           else
               cout << "All books are on the bookshelf!" << endl;
           break;
       }
    }
}

//关于信息显示函数(使用规则、借阅规则、系统信息）;
void Query::help_query(int order,string *Msg, Handle_MySQL *vspdctomysql)
{
    if (order == 0)
        cout << "使用规则" << endl;
    else if (order == 1)
        cout << "借阅规则" << endl;
    else
        cout << "系统信息" << endl;
}
