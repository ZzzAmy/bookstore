#ifndef STUDENTINFO_OVERALL_H
#define STUDENTINFO_OVERALL_H

#include <QDialog>

namespace Ui {
class studentinfo_overall;
}

class studentinfo_overall : public QDialog
{
    Q_OBJECT

public:
    explicit studentinfo_overall(QWidget *parent = 0);
    ~studentinfo_overall();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

private:
    Ui::studentinfo_overall *ui;
};

#endif // STUDENTINFO_OVERALL_H
