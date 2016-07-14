#ifndef BOOK_DELETE_SUCCEED_H
#define BOOK_DELETE_SUCCEED_H

#include <QDialog>

namespace Ui {
class book_delete_succeed;
}

class book_delete_succeed : public QDialog
{
    Q_OBJECT

public:
    explicit book_delete_succeed(QWidget *parent = 0);
    ~book_delete_succeed();

private:
    Ui::book_delete_succeed *ui;
};

#endif // BOOK_DELETE_SUCCEED_H
