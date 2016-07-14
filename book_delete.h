#ifndef BOOK_DELETE_H
#define BOOK_DELETE_H

#include <QDialog>

namespace Ui {
class book_delete;
}

class book_delete : public QDialog
{
    Q_OBJECT

public:
    explicit book_delete(QWidget *parent = 0);
    ~book_delete();

private slots:
    void on_pushButton_clicked();

private:
    Ui::book_delete *ui;
};

#endif // BOOK_DELETE_H
