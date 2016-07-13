#ifndef HEADER_H
#define HEADER_H

#include "book_book.h"
#include "book_query.h"
#include "book_book_system.h"
#include "book_handle_mysql.h"
#include <QString>
#include <QDebug>
static QString host = "192.168.3.12";
static QString user = "remoteuser";
static unsigned int port = 3306;
static QString password = "123456";
static QString database = "book2";
static QString charset = "utf8";
static Handle_MySQL * vspdctomysql = new Handle_MySQL;
static string s;
static string *Msg = &s;


#endif // HEADER_H
