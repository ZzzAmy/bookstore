#ifndef STUDENT_INFO_INQUIRY_INPUT_H
#define STUDENT_INFO_INQUIRY_INPUT_H

#include <QDialog>

namespace Ui {
class student_info_inquiry_input;
}

class student_info_inquiry_input : public QDialog
{
    Q_OBJECT

public:
    explicit student_info_inquiry_input(QWidget *parent = 0);
    ~student_info_inquiry_input();

private slots:
    void on_pushButton_clicked();

private:
    Ui::student_info_inquiry_input *ui;
};

#endif // STUDENT_INFO_INQUIRY_INPUT_H
