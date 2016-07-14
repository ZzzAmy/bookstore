#ifndef ADD_BOOKS_H
#define ADD_BOOKS_H

#include <QDialog>

namespace Ui {
class add_books;
}

class add_books : public QDialog
{
    Q_OBJECT

public:
    explicit add_books(QWidget *parent = 0);
    ~add_books();



private slots:
    void on_add_clicked();

private:
    Ui::add_books *ui;
};

#endif // ADD_BOOKS_H
