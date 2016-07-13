#ifndef USRMAG_MANAGER_H
#define USRMAG_MANAGER_H

#include <QDialog>

namespace Ui {
class usrmag_manager;
}

class usrmag_manager : public QDialog
{
    Q_OBJECT

public:
    explicit usrmag_manager(QWidget *parent = 0);
    ~usrmag_manager();

private slots:
    void on_pushButton_clicked();


private:
    Ui::usrmag_manager *ui;
};

#endif // USRMAG_MANAGER_H
