#ifndef ISRETURN_H
#define ISRETURN_H

#include <QDialog>

namespace Ui {
class Isreturn;
}

class Isreturn : public QDialog
{
    Q_OBJECT

public:
    explicit Isreturn(QWidget *parent = 0);
    ~Isreturn();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Isreturn *ui;
};

#endif // ISRETURN_H
