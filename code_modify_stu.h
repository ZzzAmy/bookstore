#ifndef CODE_MODIFY_STU_H
#define CODE_MODIFY_STU_H

#include <QDialog>

namespace Ui {
class code_modify_stu;
}

class code_modify_stu : public QDialog
{
    Q_OBJECT

public:
    explicit code_modify_stu(QWidget *parent = 0);
    ~code_modify_stu();

private slots:
    void on_pushButton_clicked();

private:
    Ui::code_modify_stu *ui;
};

#endif // CODE_MODIFY_STU_H
