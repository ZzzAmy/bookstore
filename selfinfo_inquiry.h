#ifndef SELFINFO_INQUIRY_H
#define SELFINFO_INQUIRY_H

#include <QDialog>
#include "book_header.h"

namespace Ui {
class selfinfo_inquiry;
}

class selfinfo_inquiry : public QDialog
{
    Q_OBJECT

public:
    explicit selfinfo_inquiry(Administrator *adm1,QWidget *parent = 0);
    ~selfinfo_inquiry();

private:
    Ui::selfinfo_inquiry *ui;
    Administrator *adm;
};

#endif // SELFINFO_INQUIRY_H
