#ifndef USRMAG_STUDENT_H
#define USRMAG_STUDENT_H

#include <QDialog>

namespace Ui {
class usrmag_student;
}

class usrmag_student : public QDialog
{
    Q_OBJECT

public:
    explicit usrmag_student(QWidget *parent = 0);
    ~usrmag_student();

private slots:
    void on_pushButton_clicked();

private:
    Ui::usrmag_student *ui;
};

#endif // USRMAG_STUDENT_H
