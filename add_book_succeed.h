#ifndef ADD_BOOK_SUCCEED_H
#define ADD_BOOK_SUCCEED_H

#include <QDialog>

namespace Ui {
class add_book_succeed;
}

class add_book_succeed : public QDialog
{
    Q_OBJECT

public:
    explicit add_book_succeed(QWidget *parent = 0);
    ~add_book_succeed();



private slots:
    void on_continue_add_clicked();

    void on_return_2_clicked();

private:
    Ui::add_book_succeed *ui;
};

#endif // ADD_BOOK_SUCCEED_H
