#ifndef CODE_MODIFY_SUCCEED_H
#define CODE_MODIFY_SUCCEED_H

#include <QDialog>

namespace Ui {
class code_modify_succeed;
}

class code_modify_succeed : public QDialog
{
    Q_OBJECT

public:
    explicit code_modify_succeed(QWidget *parent = 0);
    ~code_modify_succeed();

private:
    Ui::code_modify_succeed *ui;
};

#endif // CODE_MODIFY_SUCCEED_H
