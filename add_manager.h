#ifndef ADD_MANAGER_H
#define ADD_MANAGER_H

#include <QDialog>

namespace Ui {
class Add_manager;
}

class Add_manager : public QDialog
{
    Q_OBJECT

public:
    explicit Add_manager(QWidget *parent = 0);
    ~Add_manager();

private slots:
    void on_pushButton_2_clicked();

private:
    Ui::Add_manager *ui;
};

#endif // ADD_MANAGER_H
