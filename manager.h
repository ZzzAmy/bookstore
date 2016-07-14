#ifndef MANAGER_H
#define MANAGER_H

#include <QDialog>

namespace Ui {
class manager;
}

class manager : public QDialog
{
    Q_OBJECT

public:
    explicit manager(QWidget *parent = 0);
    ~manager();

private slots:
    void on_inquiryBtn_clicked();

    void on_bookmanageBtn_clicked();

    void on_usrmanageBtn_clicked();

    void on_pwdmanageBtn_clicked();

private:
    Ui::manager *ui;
};

#endif // MANAGER_H
