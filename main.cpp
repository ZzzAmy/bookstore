#include <QApplication>
#include "logindialog.h"
#include "book_header.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    LoginDialog dlg;
    if(dlg.exec() == QDialog::Accepted)
    {
       return a.exec();
    }
    else
    {
        return 0;
    }
}
