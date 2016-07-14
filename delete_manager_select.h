#ifndef DELETE_MANAGER_SELECT_H
#define DELETE_MANAGER_SELECT_H

#include <QDialog>

namespace Ui {
class delete_manager_select;
}

class delete_manager_select : public QDialog
{
    Q_OBJECT

public:
    explicit delete_manager_select(QWidget *parent = 0);
    ~delete_manager_select();

private slots:
    void on_pushButton_2_clicked();

private:
    Ui::delete_manager_select *ui;
};

#endif // DELETE_MANAGER_SELECT_H
