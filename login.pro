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
    managerinfo_overall_show.cpp \
    inquiry_manager_show.cpp \
    add_manager.cpp \
    delete_manager.cpp \
#    administrator/add_book_fail.cpp \
#    administrator/add_book_succeed.cpp \
#    administrator/add_books.cpp \
#    administrator/book_delete.cpp \
#    administrator/book_delete_fail.cpp \
#    administrator/book_delete_succeed.cpp \
#    administrator/book_manage.cpp \
#    administrator/code_manage.cpp \
#    administrator/code_modify_fail.cpp \
#    administrator/code_modify_succeed.cpp \
#    administrator/main.cpp \
#    administrator/mainwindow.cpp \
#    reader/book_borrow.cpp \
#    reader/book_imformation.cpp \
#    reader/code_modify_stu.cpp \
#    reader/code_modify_stu_2.cpp \
#    reader/main.cpp \
#    reader/mainwindow.cpp \
#    reader/search_book.cpp \
#    reader/stu_imformation.cpp \
    studentinfo_overall.cpp \
    studentinfo_overall_show.cpp \
    student_info_inquiry_input.cpp \
    change_manager_info_input.cpp \
    book_borrow.cpp \
    book_imformation.cpp \
    book_system.cpp \
    code_modify_stu.cpp \
    code_modify_stu_2.cpp \
    #mainwindow.cpp \
    search_book.cpp \
    stu_imformation.cpp \
    add_book_fail.cpp \
    add_book_succeed.cpp \
    add_books.cpp \
    book_delete.cpp \
    book_delete_fail.cpp \
    book_delete_succeed.cpp \
    book_manage.cpp \
    code_manage.cpp \
    code_modify_fail.cpp \
    code_modify_succeed.cpp \
    delete_manager_select.cpp \
    add_student.cpp \
    change_student_info.cpp \
    delete_student.cpp \
    delete_student_input.cpp \
    inquiry_studentinfo.cpp \
    inquiry_studentinfo_show.cpp \
    reader_inquiry.cpp


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
    managerinfo_overall_show.h \
    inquiry_manager_show.h \
    add_manager.h \
    delete_manager.h \
    studentinfo_overall.h \
    studentinfo_overall_show.h \
    student_info_inquiry_input.h \
    change_manager_info_input.h \
    book_book.h \
    book_borrow.h \
    book_imformation.h \
    book_system.h \
    code_modify_stu.h \
    code_modify_stu_2.h \
    #mainwindow.h \
    search_book.h \
    stu_imformation.h \
    add_book_fail.h \
    add_book_succeed.h \
    add_books.h \
    book_delete.h \
    book_delete_fail.h \
    book_delete_succeed.h \
    book_manage.h \
    code_manage.h \
    code_modify_fail.h \
    code_modify_succeed.h \
    delete_manager_select.h \
    add_student.h \
    change_student_info.h \
    delete_student.h \
    delete_student_input.h \
    inquiry_studentinfo.h \
    inquiry_studentinfo_show.h \
    reader_inquiry.h


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
    inquiry_manager.ui \
    book_search.ui \
    student_info_inquiry_search.ui \
    lendbook_overall.ui \
    bookinquiry_table.ui \
    managerinfo_overall_show.ui \
    inquiry_manager_show.ui \
    add_manager.ui \
    delete_manager.ui \
#    administrator/add_book_fail.ui \
#    administrator/add_book_succeed.ui \
#    administrator/add_books.ui \
#    administrator/book_delete.ui \
#    administrator/book_delete_fail.ui \
#    administrator/book_delete_succeed.ui \
#    administrator/book_manage.ui \
#    administrator/code_manage.ui \
#    administrator/code_modify_fail.ui \
#    administrator/code_modify_succeed.ui \
#    administrator/mainwindow.ui \
#    reader/book_borrow.ui \
#    reader/book_imformation.ui \
#    reader/code_modify_stu.ui \
#    reader/code_modify_stu_2.ui \
#    reader/mainwindow.ui \
#    reader/search_book.ui \
#    reader/stu_imformation.ui \
    studentinfo_overall.ui \
    studentinfo_overall_show.ui \
#    idcheck.ui \
    student_info_inquiry_input.ui \
    usrmag_student.ui \
    change_manager_info_input.ui \
    book_borrow.ui \
    book_imformation.ui \
    code_modify_stu.ui \
    code_modify_stu_2.ui \
    #mainwindow.ui \
    returnsuccess.ui \
    search_book.ui \
    stu_imformation.ui \
    add_book_fail.ui \
    add_book_succeed.ui \
    add_books.ui \
    book_delete.ui \
    book_delete_fail.ui \
    book_delete_succeed.ui \
    book_manage.ui \
    code_manage.ui \
    code_modify_fail.ui \
    code_modify_succeed.ui \
    delete_manager_select.ui \
    add_student.ui \
    change_student_info.ui \
    delete_student.ui \
    delete_student_input.ui \
    inquiry_studentinfo.ui \
    inquiry_studentinfo_show.ui \
    reader_inquiry.ui


QT += sql

INCLUDEPATH += "C:\Program Files\MySQL\MySQL Server 5.7\include"

LIBS += "C:\Program Files\MySQL\MySQL Server 5.7\lib\libmysql.lib"

DISTFILES += \
    login.pro.user \
    administrator/administrator.pro.user \
    administrator.pro.user

SUBDIRS += \
    administrator/administrator.pro \
    administrator.pro
