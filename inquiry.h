#ifndef INQUIRY_H
#define INQUIRY_H

#include <QDialog>
#include "book_header.h"
namespace Ui {
class Inquiry;
}

class Inquiry : public QDialog
{
    Q_OBJECT

public:
    explicit Inquiry(Administrator *adm1,QWidget *parent = 0);
    ~Inquiry();

private slots:
    void on_selfinfo_inquiry_clicked();

    void on_studentinfo_inquiry_clicked();

private:
    Ui::Inquiry *ui;
    Administrator *adm;
};

#endif // INQUIRY_H
