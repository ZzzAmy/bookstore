#ifndef ADD_BOOK_FAIL_H
#define ADD_BOOK_FAIL_H

#include <QDialog>

namespace Ui {
class add_book_fail;
}

class add_book_fail : public QDialog
{
    Q_OBJECT

public:
    explicit add_book_fail(QWidget *parent = 0);
    ~add_book_fail();

private slots:
    void on_re_add_clicked();

private:
    Ui::add_book_fail *ui;
};

#endif // ADD_BOOK_FAIL_H
