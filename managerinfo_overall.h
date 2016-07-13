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

private:
    Ui::managerinfo_overall *ui;
};

#endif // MANAGERINFO_OVERALL_H
