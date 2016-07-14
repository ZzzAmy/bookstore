#ifndef IDCHECK_H
#define IDCHECK_H

#include <QDialog>

namespace Ui {
class IDcheck;
}

class IDcheck : public QDialog
{
    Q_OBJECT

public:
    explicit IDcheck(QWidget *parent = 0);
    ~IDcheck();

private slots:
    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

private:
    Ui::IDcheck *ui;
};

#endif // IDCHECK_H
