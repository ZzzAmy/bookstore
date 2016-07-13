#ifndef READER_H
#define READER_H

#include <QDialog>
#include "book_header.h"
namespace Ui {
class Reader;
}

class Reader : public QDialog
{
    Q_OBJECT

public:
    explicit Reader(Student *stu1,QWidget *parent = 0);
    ~Reader();

private slots:
    void on_pushButton_2_clicked();

private:
    Ui::Reader *ui;
    Student *stu;
};

#endif // READER_H
