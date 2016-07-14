#ifndef STU_IMFORMATION_H
#define STU_IMFORMATION_H

#include <QDialog>

namespace Ui {
class stu_imformation;
}

class stu_imformation : public QDialog
{
    Q_OBJECT

public:
    explicit stu_imformation(QWidget *parent = 0);
    ~stu_imformation();


private slots:
    void on_return_main_clicked();

private:
    Ui::stu_imformation *ui;
};

#endif // STU_IMFORMATION_H
