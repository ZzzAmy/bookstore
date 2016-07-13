#ifndef CHANGE_MANAGER_INFO_H
#define CHANGE_MANAGER_INFO_H

#include <QDialog>

namespace Ui {
class change_manager_info;
}

class change_manager_info : public QDialog
{
    Q_OBJECT

public:
    explicit change_manager_info(QWidget *parent = 0);
    ~change_manager_info();

private:
    Ui::change_manager_info *ui;
};

#endif // CHANGE_MANAGER_INFO_H
