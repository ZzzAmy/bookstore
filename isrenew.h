#ifndef ISRENEW_H
#define ISRENEW_H

#include <QDialog>

namespace Ui {
class Isrenew;
}

class Isrenew : public QDialog
{
    Q_OBJECT

public:
    explicit Isrenew(QWidget *parent = 0);
    ~Isrenew();

private:
    Ui::Isrenew *ui;
};

#endif // ISRENEW_H
