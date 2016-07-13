#include <QApplication>
#include "logindialog.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    LoginDialog dlg;
    if(dlg.exec() == QDialog::Accepted)
    {



       return a.exec();
    }
    else return 0;
}
