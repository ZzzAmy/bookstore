#ifndef READER_INQUIRT_SELF_H
#define READER_INQUIRT_SELF_H

#include <QDialog>

namespace Ui {
class reader_inquirt_self;
}

class reader_inquirt_self : public QDialog
{
    Q_OBJECT

public:
    explicit reader_inquirt_self(QWidget *parent = 0);
    ~reader_inquirt_self();

private:
    Ui::reader_inquirt_self *ui;
};

#endif // READER_INQUIRT_SELF_H
