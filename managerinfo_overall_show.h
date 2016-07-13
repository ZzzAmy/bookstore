#ifndef MANAGERINFO_OVERALL_SHOW_H
#define MANAGERINFO_OVERALL_SHOW_H

#include <QDialog>

namespace Ui {
class managerinfo_overall_show;
}

class managerinfo_overall_show : public QDialog
{
    Q_OBJECT

public:
    explicit managerinfo_overall_show(QWidget *parent = 0);
    ~managerinfo_overall_show();

private:
    Ui::managerinfo_overall_show *ui;
};

#endif // MANAGERINFO_OVERALL_SHOW_H
