#ifndef BOOK_SEARCH_H
#define BOOK_SEARCH_H

#include <QDialog>

namespace Ui {
class book_search;
}

class book_search : public QDialog
{
    Q_OBJECT

public:
    explicit book_search(QWidget *parent = 0);
    ~book_search();

private:
    Ui::book_search *ui;
};

#endif // BOOK_SEARCH_H
