#ifndef LOGINDIALOG_H
#define LOGINDIALOG_H

#include <QDialog>
#include "book_header.h"

namespace Ui {
class LoginDialog;
}

class LoginDialog : public QDialog
{
    Q_OBJECT

public:
    explicit LoginDialog(QWidget *parent = 0);
    ~LoginDialog();

private slots:
    void on_loginBtn_clicked();

 //   void on_comboBox_activated(const QString &arg1);

private:
    Ui::LoginDialog *ui;

};


#endif // LOGINDIALOG_H
