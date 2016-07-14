#ifndef READER_H
#define READER_H

#include <QDialog>

namespace Ui {
class Reader;
}

class Reader : public QDialog
{
    Q_OBJECT

public:
    explicit Reader(QWidget *parent = 0);
    ~Reader();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_clicked();

private:
    Ui::Reader *ui;
};

#endif // READER_H
