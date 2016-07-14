#ifndef CHANGE_MANAGER_INFO_INPUT_H
#define CHANGE_MANAGER_INFO_INPUT_H

#include <QDialog>

namespace Ui {
class change_manager_info_input;
}

class change_manager_info_input : public QDialog
{
    Q_OBJECT

public:
    explicit change_manager_info_input(QWidget *parent = 0);
    ~change_manager_info_input();

private slots:
    void on_pushButton_2_clicked();

private:
    Ui::change_manager_info_input *ui;
};

#endif // CHANGE_MANAGER_INFO_INPUT_H
