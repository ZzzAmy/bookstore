#ifndef DELETE_STUDENT_INPUT_H
#define DELETE_STUDENT_INPUT_H

#include <QDialog>

namespace Ui {
class Delete_student_input;
}

class Delete_student_input : public QDialog
{
    Q_OBJECT

public:
    explicit Delete_student_input(QWidget *parent = 0);
    ~Delete_student_input();

private slots:
    void on_pushButton_2_clicked();

private:
    Ui::Delete_student_input *ui;
};

#endif // DELETE_STUDENT_INPUT_H
