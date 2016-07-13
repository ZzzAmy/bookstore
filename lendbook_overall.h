#ifndef LENDBOOK_OVERALL_H
#define LENDBOOK_OVERALL_H

#include <QDialog>

namespace Ui {
class lendbook_overall;
}

class lendbook_overall : public QDialog
{
    Q_OBJECT

public:
    explicit lendbook_overall(QWidget *parent = 0);
    ~lendbook_overall();

private:
    Ui::lendbook_overall *ui;
};

#endif // LENDBOOK_OVERALL_H
