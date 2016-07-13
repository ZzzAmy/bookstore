#ifndef INQUIRY_H
#define INQUIRY_H

#include <QDialog>

namespace Ui {
class Inquiry;
}

class Inquiry : public QDialog
{
    Q_OBJECT

public:
    explicit Inquiry(QWidget *parent = 0);
    ~Inquiry();

private slots:
    void on_selfinfo_inquiry_clicked();

    void on_studentinfo_inquiry_clicked();

    void on_bookinfo_inquiry_clicked();

    void on_pushButton_clicked();

private:
    Ui::Inquiry *ui;
};

#endif // INQUIRY_H
