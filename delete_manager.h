#ifndef DELETE_MANAGER_H
#define DELETE_MANAGER_H

#include <QDialog>

namespace Ui {
class delete_manager;
}

class delete_manager : public QDialog
{
    Q_OBJECT

public:
    explicit delete_manager(QWidget *parent = 0);
    ~delete_manager();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::delete_manager *ui;
};

#endif // DELETE_MANAGER_H
