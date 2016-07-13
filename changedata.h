#ifndef CHANGEDATA_H
#define CHANGEDATA_H

#include <QDialog>

namespace Ui {
class Changedata;
}

class Changedata : public QDialog
{
    Q_OBJECT

public:
    explicit Changedata(QWidget *parent = 0);
    ~Changedata();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Changedata *ui;
};

#endif // CHANGEDATA_H
