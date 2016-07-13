#include "book.h"

//获取目标书目的isbn和name;
void target_book(Book *book)
{
    char end_order;
    do
    {
        cout << "Please input the information of the book in the order of book_isbn/book_name:" << endl;
        cin >> book->book_isbn >> book->book_name;
        cout << "Are you sure? Please input Y(y)/N(n):" << endl;
        cin >> end_order;
    } while (end_order == 'N' || end_order == 'n');
}

//新书信息录入函数;
void Book::add_book(string *Msg, Handle_MySQL * vspdctomysql)
{
    //获取输入;
    cout << "Please input the information of new book in the order of book_isbn/book_name/book_author/book_price/putaway_date:" << endl;
    cin >> book_isbn >> book_name >> book_author >> book_price >> putaway_date;
    //转换为SQL;
    char s1[2048], s2[2048], s3[2048], s4[2048];
    strcpy(s1, book_isbn.c_str());
    strcpy(s2, book_name.c_str());
    strcpy(s3, book_author.c_str());
    strcpy(s4, putaway_date.c_str());
    char SQL[2048];
    cout << book_isbn << book_name << book_author << book_price << putaway_date << endl;
    sprintf(SQL, "insert into books values('%s','%s','%s',%.2f,'%s','%s','%s','%s','%s')",
        s1, s2, s3, book_price, s4, "On_bookshelf", "On_bookshelf", "Nobody", "No_preborrow");
    //插入数据库;
    if (vspdctomysql->InsertData(SQL, Msg) == 0)
        cout << "succeeded to insert!" << endl;
    else
        cout << *Msg << endl;
}

//旧书下架函数;
void Book::delete_book(string *Msg, Handle_MySQL * vspdctomysql)
{
    int input_number = -1, find_book = 0;
    do
    {
        ++input_number;
        if (input_number > 0)
        {
            cout << "There is not the book you want to delete on the bookshelf! Please input again:" << endl;
        }
        //获取要删除的书的信息;
        cout << "Please input the information of the book you want to delete in the order of book_isbn/book_name:" << endl;
        cin >> book_isbn >> book_name;
        //检查数据库中是否有这本书;
        char s1[2048], s2[2048];
        strcpy(s1, book_isbn.c_str());
        strcpy(s2, book_name.c_str());
        char SQL[2048];
        sprintf(SQL, "select name from books where isbn = '%s'", s1);
        string str = vspdctomysql->SelectData(SQL, Msg);
        string delete_book = "name           \n" + book_name;//因为从数据库中获取数据格式影响，必须转换;
        for (int i = 0; i < 15 - book_name.size(); ++i)
        {
            delete_book += " ";
        }
        delete_book += "\n";
        //删除这本书;
        if (delete_book == str)
        {
            sprintf(SQL, "delete from books where isbn = '%s'", s1);
            vspdctomysql->DeleteData(SQL, Msg);
            cout << "Succeeded to delete the book!" << endl;
            find_book = 1;
        }
    } while (!find_book);
}

//预约函数;
void Book_management::pre_borrow_book(Book *book, string *Msg, Handle_MySQL * vspdctomysql)
{
    //注意：必须在函数外部确定所预约的书是否存在;
    char s1[2048], s2[2048];
    strcpy(s1, (book->book_isbn).c_str());
    strcpy(s2, (book->book_name).c_str());
    char SQL[2048];
    sprintf(SQL, "update books set preborrowstatus = '%s' where isbn = '%s' and name = '%s'", "Was_pre_borrowed", s1, s2);
    if (vspdctomysql->UpdateData(SQL, Msg) == 0)
        cout << "Succeeded to pre_borrow!" << endl;
}

//借书函数;
void Book_management::borrow_book(Book *book, Student *student, string *Msg, Handle_MySQL * vspdctomysql)
{
    //注意：必须在函数外部确定所预约的书是否存在,借书人在登录时已经验证;
    char s1[2048], s2[2048], s3[2048], s4[2048];
    strcpy(s1, (book->book_isbn).c_str());
    strcpy(s2, (book->book_name).c_str());
    strcpy(s3, (student->student_name).c_str());
    strcpy(s4, (student->student_num).c_str());
    char SQL[2048];
    //检查用户目前借书状态，如果已借为0或borrowedbook2，则更新borrowedbook1，已借为0或borrowedbook1则更新borrowedbook2，否则借书失败;
    sprintf(SQL, "select borrowedbook1 from students where number = '%s'", s4);
    string str1=vspdctomysql->SelectData(SQL, Msg);
    sprintf(SQL, "select borrowedbook2 from students where number = '%s'", s4);
    string str2 = vspdctomysql->SelectData(SQL, Msg);
    string str3 = "borrowedbook1  \n               \n";
    string str4 = "borrowedbook2  \n               \n";
    //获取borrowedbook1，borrowedbook2;
    if (str1==str3)
    {
        sprintf(SQL, "update students set borrowedbook1 = '%s' where number = '%s'", s1, s4);
        int i = vspdctomysql->UpdateData(SQL, Msg);
        sprintf(SQL, "update books set borrowstatus = '%s',borrowperson = '%s',preborrowstatus='%s' where isbn = '%s'", "Was_borrowed", s3,"No_pre_borrow", s1);
        int j = vspdctomysql->UpdateData(SQL, Msg);
        if (i == 0 && j == 0)
            cout << "Succeeded to borrow the book!" << endl;
    }
    else if (str2==str4)
    {
        sprintf(SQL, "update students set borrowedbook2 = '%s' where number = '%s'", s1, s4);
        int i = vspdctomysql->UpdateData(SQL, Msg);
        sprintf(SQL, "update books set borrowstatus = '%s',borrowperson = '%s',preborrowstatus='%s' where isbn = '%s'", "Was_borrowed", s3, "No_pre_borrow", s1);
        int j = vspdctomysql->UpdateData(SQL, Msg);
        if (i == 0 && j == 0)
            cout << "Succeeded to borrow the book!" << endl;
    }
    else
    {
        cout << "Sorry,you have borrowed two books!" << endl;
    }
}

//续借函数;
void Book_management::re_borrow_book(Book *book, Student *student, string *Msg, Handle_MySQL * vspdctomysql)
{
    borrow_book(book, student, Msg, vspdctomysql);
}

//还书函数;
void Book_management::return_book(Book *book, Student *student, string *Msg, Handle_MySQL * vspdctomysql)
{
    char s1[2048], s2[2048];
    strcpy(s1, (book->book_isbn).c_str());
    strcpy(s2, (student->student_num).c_str());
    //将书置为初始态;
    char SQL[2048];
    sprintf(SQL, "update books set borrowstatus = '%s', borrowperson = '%s' where isbn='%s'", "On_bookshelf", "", s1);
    vspdctomysql->UpdateData(SQL, Msg);
    //确定所借书是在borrowedbook1/2，然后还书;
    sprintf(SQL, "select borrowedbook1 from students where number = '%s'", s2);
    string str= vspdctomysql->SelectData(SQL, Msg);
    string str1 = "borrowedbook1  \n" + (book->book_isbn);
    for (int i = 0; i < 15 - (book->book_isbn).size(); ++i)
    {
        str1 += " ";
    }
    str1 += "\n";
    if (str == str1)
    {
        sprintf(SQL, "update students set borrowedbook1 = '%s' where number = '%s'", "", s2);
        if (vspdctomysql->UpdateData(SQL, Msg) == 0)
            cout << "Succeeded to return the book!" << endl;
    }
    else
    {
        sprintf(SQL, "update students set borrowedbook2 = '%s' where number = '%s'", "", s2);
        if (vspdctomysql->UpdateData(SQL, Msg) == 0)
            cout << "Succeeded to return the book!" << endl;
    }
}
