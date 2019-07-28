#include "widget.h"
#include <QApplication>

#include <QFontDatabase>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    int nIndex = QFontDatabase::addApplicationFont(":/msyh.ttf");
    QStringList strList(QFontDatabase::applicationFontFamilies(nIndex));
    QFont fontThis(strList.at(0));
    //fontThis.setPointSize(50);
    a.setFont(fontThis);

    widget w;
    w.show();

    return a.exec();
}
