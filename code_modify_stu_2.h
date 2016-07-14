#ifndef CODE_MODIFY_STU_2_H
#define CODE_MODIFY_STU_2_H

#include <QDialog>

namespace Ui {
class code_modify_stu_2;
}

class code_modify_stu_2 : public QDialog
{
    Q_OBJECT

public:
    explicit code_modify_stu_2(QWidget *parent = 0);
    ~code_modify_stu_2();

private slots:
    void on_pushButton_clicked();

private:
    Ui::code_modify_stu_2 *ui;
};

#endif // CODE_MODIFY_STU_2_H
