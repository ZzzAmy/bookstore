#ifndef INQUIRY_MANAGER_H
#define INQUIRY_MANAGER_H

#include <QDialog>

namespace Ui {
class inquiry_manager;
}

class inquiry_manager : public QDialog
{
    Q_OBJECT

public:
    explicit inquiry_manager(QWidget *parent = 0);
    ~inquiry_manager();

private:
    Ui::inquiry_manager *ui;
};

#endif // INQUIRY_MANAGER_H
