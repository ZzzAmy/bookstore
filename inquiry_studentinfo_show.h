#ifndef INQUIRY_STUDENTINFO_SHOW_H
#define INQUIRY_STUDENTINFO_SHOW_H

#include <QDialog>

namespace Ui {
class inquiry_studentinfo_show;
}

class inquiry_studentinfo_show : public QDialog
{
    Q_OBJECT

public:
    explicit inquiry_studentinfo_show(QWidget *parent = 0);
    ~inquiry_studentinfo_show();

private:
    Ui::inquiry_studentinfo_show *ui;
};

#endif // INQUIRY_STUDENTINFO_SHOW_H
