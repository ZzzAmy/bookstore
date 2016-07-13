#ifndef MANAGERINFO_OVERALL_H
#define MANAGERINFO_OVERALL_H

#include <QDialog>

namespace Ui {
class managerinfo_overall;
}

class managerinfo_overall : public QDialog
{
    Q_OBJECT

public:
    explicit managerinfo_overall(QWidget *parent = 0);
    ~managerinfo_overall();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

private:
    Ui::managerinfo_overall *ui;
};

#endif // MANAGERINFO_OVERALL_H
