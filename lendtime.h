#ifndef LENDTIME_H
#define LENDTIME_H

#include <QDialog>

namespace Ui {
class lendtime;
}

class lendtime : public QDialog
{
    Q_OBJECT

public:
    explicit lendtime(QWidget *parent = 0);
    ~lendtime();

private:
    Ui::lendtime *ui;
};

#endif // LENDTIME_H
