#ifndef BOOKINFO_INQUIRY_H
#define BOOKINFO_INQUIRY_H

#include <QDialog>

namespace Ui {
class bookinfo_inquiry;
}

class bookinfo_inquiry : public QDialog
{
    Q_OBJECT

public:
    explicit bookinfo_inquiry(QWidget *parent = 0);
    ~bookinfo_inquiry();

private:
    Ui::bookinfo_inquiry *ui;
};

#endif // BOOKINFO_INQUIRY_H
