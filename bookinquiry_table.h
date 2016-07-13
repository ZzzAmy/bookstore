#ifndef BOOKINQUIRY_TABLE_H
#define BOOKINQUIRY_TABLE_H

#include <QDialog>

namespace Ui {
class bookinquiry_table;
}

class bookinquiry_table : public QDialog
{
    Q_OBJECT

public:
    explicit bookinquiry_table(QWidget *parent = 0);
    ~bookinquiry_table();

private:
    Ui::bookinquiry_table *ui;
};

#endif // BOOKINQUIRY_TABLE_H
