#ifndef SEARCH_BOOK_H
#define SEARCH_BOOK_H

#include <QDialog>

namespace Ui {
class search_book;
}

class search_book : public QDialog
{
    Q_OBJECT

public:
    explicit search_book(QWidget *parent = 0);
    ~search_book();

private slots:
    void on_book_search_bn_clicked();

private:
    Ui::search_book *ui;
};

#endif // SEARCH_BOOK_H
