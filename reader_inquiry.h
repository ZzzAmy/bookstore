#ifndef READER_INQUIRY_H
#define READER_INQUIRY_H

#include <QDialog>

namespace Ui {
class reader_inquiry;
}

class reader_inquiry : public QDialog
{
    Q_OBJECT

public:
    explicit reader_inquiry(QWidget *parent = 0);
    ~reader_inquiry();

private:
    Ui::reader_inquiry *ui;
};

#endif // READER_INQUIRY_H
