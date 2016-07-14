#-------------------------------------------------
#
# Project created by QtCreator 2016-07-12T11:11:47
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = administrator
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    book_manage.cpp \
    add_books.cpp \
    add_book_succeed.cpp \
    add_book_fail.cpp \
    book_delete.cpp \
    book_delete_succeed.cpp \
    code_manage.cpp \
    code_modify_succeed.cpp \
    book_delete_fail.cpp \
    code_modify_fail.cpp

HEADERS  += mainwindow.h \
    book_manage.h \
    add_books.h \
    add_book_succeed.h \
    add_book_fail.h \
    book_delete.h \
    book_delete_succeed.h \
    code_manage.h \
    code_modify_succeed.h \
    book_delete_fail.h \
    code_modify_fail.h

FORMS    += mainwindow.ui \
    book_manage.ui \
    add_books.ui \
    add_book_succeed.ui \
    add_book_fail.ui \
    book_delete.ui \
    book_delete_succeed.ui \
    code_manage.ui \
    code_modify_succeed.ui \
    book_delete_fail.ui \
    code_modify_fail.ui
