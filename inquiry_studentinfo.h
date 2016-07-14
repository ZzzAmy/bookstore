#ifndef INQUIRY_STUDENTINFO_H
#define INQUIRY_STUDENTINFO_H

#include <QDialog>

namespace Ui {
class inquiry_studentinfo;
}

class inquiry_studentinfo : public QDialog
{
    Q_OBJECT

public:
    explicit inquiry_studentinfo(QWidget *parent = 0);
    ~inquiry_studentinfo();

private slots:
    void on_pushButton_clicked();

private:
    Ui::inquiry_studentinfo *ui;
};

#endif // INQUIRY_STUDENTINFO_H
