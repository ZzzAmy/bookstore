#ifndef INQUIRY_MANAGER_SHOW_H
#define INQUIRY_MANAGER_SHOW_H

#include <QDialog>

namespace Ui {
class inquiry_manager_show;
}

class inquiry_manager_show : public QDialog
{
    Q_OBJECT

public:
    explicit inquiry_manager_show(QWidget *parent = 0);
    ~inquiry_manager_show();

private:
    Ui::inquiry_manager_show *ui;
};

#endif // INQUIRY_MANAGER_SHOW_H
