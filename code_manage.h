#ifndef CODE_MANAGE_H
#define CODE_MANAGE_H

#include <QDialog>

namespace Ui {
class code_manage;
}

class code_manage : public QDialog
{
    Q_OBJECT

public:
    explicit code_manage(QWidget *parent = 0);
    ~code_manage();

private slots:
    void on_modify_code_clicked();

private:
    Ui::code_manage *ui;
};

#endif // CODE_MANAGE_H
