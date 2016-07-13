#ifndef STUDENT_INFO_INQUIRY_SEARCH_H
#define STUDENT_INFO_INQUIRY_SEARCH_H

#include <QDialog>

namespace Ui {
class student_info_inquiry_search;
}

class student_info_inquiry_search : public QDialog
{
    Q_OBJECT

public:
    explicit student_info_inquiry_search(QWidget *parent = 0);
    ~student_info_inquiry_search();

private:
    Ui::student_info_inquiry_search *ui;
};

#endif // STUDENT_INFO_INQUIRY_SEARCH_H
