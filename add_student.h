#ifndef ADD_STUDENT_H
#define ADD_STUDENT_H

#include <QDialog>

namespace Ui {
class add_student;
}

class add_student : public QDialog
{
    Q_OBJECT

public:
    explicit add_student(QWidget *parent = 0);
    ~add_student();

private slots:
    void on_pushButton_2_clicked();

private:
    Ui::add_student *ui;
};

#endif // ADD_STUDENT_H
