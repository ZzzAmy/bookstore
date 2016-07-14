#ifndef CODE_MODIFY_FAIL_H
#define CODE_MODIFY_FAIL_H

#include <QDialog>

namespace Ui {
class code_modify_fail;
}

class code_modify_fail : public QDialog
{
    Q_OBJECT

public:
    explicit code_modify_fail(QWidget *parent = 0);
    ~code_modify_fail();

private slots:
    void on_re_modify_clicked();

private:
    Ui::code_modify_fail *ui;
};

#endif // CODE_MODIFY_FAIL_H
