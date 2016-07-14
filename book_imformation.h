#ifndef BOOK_IMFORMATION_H
#define BOOK_IMFORMATION_H

#include <QDialog>

namespace Ui {
class book_imformation;
}

class book_imformation : public QDialog
{
    Q_OBJECT

public:
    explicit book_imformation(QWidget *parent = 0);
    ~book_imformation();

private slots:
    void on_return_book_clicked();

private:
    Ui::book_imformation *ui;
};

#endif // BOOK_IMFORMATION_H
