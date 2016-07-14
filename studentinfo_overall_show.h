#ifndef STUDENTINFO_OVERALL_SHOW_H
#define STUDENTINFO_OVERALL_SHOW_H

#include <QDialog>

namespace Ui {
class studentinfo_overall_show;
}

class studentinfo_overall_show : public QDialog
{
    Q_OBJECT

public:
    explicit studentinfo_overall_show(QWidget *parent = 0);
    ~studentinfo_overall_show();

private:
    Ui::studentinfo_overall_show *ui;
};

#endif // STUDENTINFO_OVERALL_SHOW_H
