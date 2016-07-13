#-------------------------------------------------
#
# Project created by QtCreator 2016-07-10T23:15:49
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = login
TEMPLATE = app


SOURCES += main.cpp\
    logindialog.cpp \
    returnwindow.cpp \
    isreturn.cpp \
    isrenew.cpp \
    lendtime.cpp \
    changedata.cpp \
    dialog.cpp \
    islend.cpp \
    manager.cpp \
    reader.cpp \
    inquiry.cpp \
    selfinfo_inquiry.cpp \
    student_info_inquiry.cpp \
    bookinfo_inquiry.cpp \
    usrmanagement.cpp \
    usrmag_manager.cpp \
    managerinfo_overall.cpp \
    change_manager_info.cpp \
    usrstatic.cpp \
    handle_mysql.cpp \
    book.cpp \
    query.cpp \
    usrmag_student.cpp \
    inquiry_manager.cpp \
    book_search.cpp \
    student_info_inquiry_search.cpp \
    lendbook_overall.cpp \
    bookinquiry_table.cpp \
    managerinfo_overall_show.cpp


HEADERS  += \
    logindialog.h \
    returnwindow.h \
    isreturn.h \
    isrenew.h \
    lendtime.h \
    changedata.h \
    dialog.h \
    islend.h \
    manager.h \
    reader.h \
    inquiry.h \
    selfinfo_inquiry.h \
    student_info_inquiry.h \
    bookinfo_inquiry.h \
    usrmanagement.h \
    usrmag_manager.h \
    managerinfo_overall.h \
    change_manager_info.h \
    usrstatic.h \
    handle_mysql.h \
    query.h \
    book.h \
    usrmag_student.h \
    inquiry_manager.h \
    book_search.h \
    student_info_inquiry_search.h \
    lendbook_overall.h \
    bookinquiry_table.h \
    managerinfo_overall_show.h


FORMS    += \
    logindialog.ui \
    returnwindow.ui \
    isreturn.ui \
    isrenew.ui \
    lendtime.ui \
    changedata.ui \
    dialog.ui \
    islend.ui \
    manager.ui \
    reader.ui \
    inquiry.ui \
    selfinfo_inquiry.ui \
    student_info_inquiry.ui \
    bookinfo_inquiry.ui \
    usrmanagement.ui \
    usrmag_manager.ui \
    managerinfo_overall.ui \
    change_manager_info.ui \
    usrmag_student.ui \
    inquiry_manager.ui \
    book_search.ui \
    student_info_inquiry_search.ui \
    lendbook_overall.ui \
    bookinquiry_table.ui \
    managerinfo_overall_show.ui


QT += sql

INCLUDEPATH += "C:\Program Files\MySQL\MySQL Server 5.7\include"

LIBS += "C:\Program Files\MySQL\MySQL Server 5.7\lib\libmysql.lib"
