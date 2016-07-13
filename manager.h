#ifndef MANAGER_H
#define MANAGER_H

#include <QDialog>
#include <book_header.h>

namespace Ui {
class manager;
}

class manager : public QDialog
{
    Q_OBJECT

public:
    explicit manager(Administrator *adm1,QWidget *parent = 0);
    ~manager();

private slots:
    void on_inquiryBtn_clicked();

    void on_bookmanageBtn_clicked();

    void on_usrmanageBtn_clicked();

private:
    Ui::manager *ui;
    Administrator *adm;
};

#endif // MANAGER_H
