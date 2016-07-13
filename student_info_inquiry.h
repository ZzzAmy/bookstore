#ifndef STUDENT_INFO_INQUIRY_H
#define STUDENT_INFO_INQUIRY_H

#include <QDialog>

namespace Ui {
class student_info_inquiry;
}

class student_info_inquiry : public QDialog
{
    Q_OBJECT

public:
    explicit student_info_inquiry(QWidget *parent = 0);
    ~student_info_inquiry();

private:
    Ui::student_info_inquiry *ui;
};

#endif // STUDENT_INFO_INQUIRY_H
