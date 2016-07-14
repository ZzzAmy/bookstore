#ifndef BOOK_DELETE_FAIL_H
#define BOOK_DELETE_FAIL_H

#include <QDialog>

namespace Ui {
class book_delete_fail;
}

class book_delete_fail : public QDialog
{
    Q_OBJECT

public:
    explicit book_delete_fail(QWidget *parent = 0);
    ~book_delete_fail();

private slots:
    void on_return_d_f_clicked();

private:
    Ui::book_delete_fail *ui;
};

#endif // BOOK_DELETE_FAIL_H
