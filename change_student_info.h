#ifndef CHANGE_STUDENT_INFO_H
#define CHANGE_STUDENT_INFO_H

#include <QDialog>

namespace Ui {
class change_student_info;
}

class change_student_info : public QDialog
{
    Q_OBJECT

public:
    explicit change_student_info(QWidget *parent = 0);
    ~change_student_info();

private slots:
    void on_pushButton_2_clicked();

private:
    Ui::change_student_info *ui;
};

#endif // CHANGE_STUDENT_INFO_H
