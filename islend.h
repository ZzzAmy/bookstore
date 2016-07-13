#ifndef ISLEND_H
#define ISLEND_H

#include <QDialog>

namespace Ui {
class Islend;
}

class Islend : public QDialog
{
    Q_OBJECT

public:
    explicit Islend(QWidget *parent = 0);
    ~Islend();

private:
    Ui::Islend *ui;
};

#endif // ISLEND_H
