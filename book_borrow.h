#ifndef BOOK_BORROW_H
#define BOOK_BORROW_H

#include <QDialog>

namespace Ui {
class book_borrow;
}

class book_borrow : public QDialog
{
    Q_OBJECT

public:
    explicit book_borrow(QWidget *parent = 0);
    ~book_borrow();

private slots:
    void on_borrow_clicked();

private:
    Ui::book_borrow *ui;
};

#endif // BOOK_BORROW_H
