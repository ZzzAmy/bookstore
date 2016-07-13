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

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::bookinfo_inquiry *ui;
};

#endif // BOOKINFO_INQUIRY_H
