//#ifndef BOOK
//#define BOOK

//#include "book_system.h"

//class Book
//{
//    //友函数;
//    friend class Book_management;
//    friend void target_book(Book *book);//获取目标书目的isbn和name;
//    friend int login(int status, string *Msg, Student *stu, Administrator * adm, Handle_MySQL *vspdctomysql);
//    friend void operate(int status, string *Msg, Handle_MySQL *vspdctomysql);
//public:
//    //构造函数、析构函数;
//    Book() = default;
//    ~Book() {}
//    //新书信息录入函数;
//    void add_book(string *Msg, Handle_MySQL * vspdctomysql);
//    //旧书下架函数;
//    void delete_book(string *Msg, Handle_MySQL * vspdctomysql);
//private:
//    string book_isbn;
//    string book_name;
//    string book_author;
//    string putaway_date;
//    string storage_status;
//    string borrow_status;
//    string pre_borrow_status;
//    string borrow_person;
//    float book_price;
//};
////图书管理类;
//class Book_management
//{
//    friend int login(int status, string *Msg, Student *stu, Administrator * adm, Handle_MySQL *vspdctomysql);
//    friend void operate(int status, string *Msg, Handle_MySQL *vspdctomysql);
//public:
//    //构造函数、析构函数;
//    Book_management() = default;
//    ~Book_management() {}
//    //预约函数;
//    void pre_borrow_book(Book *book, string *Msg, Handle_MySQL * vspdctomysql);
//    //借书函数;
//    void borrow_book(Book *book, Student *student, string *Msg, Handle_MySQL * vspdctomysql);
//    //续借函数;
//    void re_borrow_book(Book *book, Student *student, string *Msg, Handle_MySQL * vspdctomysql);
//    //还书函数;
//    void return_book(Book *book, Student *student, string *Msg, Handle_MySQL * vspdctomysql);

//private:
//    Book book;
//    Student student;
//};

//#endif BOOK
