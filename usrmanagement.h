#ifndef USRMANAGEMENT_H
#define USRMANAGEMENT_H

#include <QDialog>

namespace Ui {
class usrmanagement;
}

class usrmanagement : public QDialog
{
    Q_OBJECT

public:
    explicit usrmanagement(QWidget *parent = 0);
    ~usrmanagement();

private slots:
   // void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::usrmanagement *ui;
};

#endif // USRMANAGEMENT_H
