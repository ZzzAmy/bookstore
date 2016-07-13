#ifndef SELFINFO_INQUIRY_H
#define SELFINFO_INQUIRY_H

#include <QDialog>

namespace Ui {
class selfinfo_inquiry;
}

class selfinfo_inquiry : public QDialog
{
    Q_OBJECT

public:
    explicit selfinfo_inquiry(QWidget *parent = 0);
    ~selfinfo_inquiry();

private slots:
    void on_pushButton_clicked();

private:
    Ui::selfinfo_inquiry *ui;
};

#endif // SELFINFO_INQUIRY_H
