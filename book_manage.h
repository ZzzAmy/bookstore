#ifndef BOOK_MANAGE_H
#define BOOK_MANAGE_H

#include <QDialog>

namespace Ui {
class book_manage;
}

class book_manage : public QDialog
{
    Q_OBJECT

public:
    explicit book_manage(QWidget *parent = 0);
    ~book_manage();

private slots:
    void on_add_book_clicked();

    void on_delete_book_clicked();

private:
    Ui::book_manage *ui;
};

#endif // BOOK_MANAGE_H
