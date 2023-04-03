#include "mainwindow.h"

#include <QApplication>
#include <X11/extensions/scrnsaver.h>
#include <stdio.h>
int main(int argc, char *argv[])
{
    Display *dpy = XOpenDisplay(NULL);

    if (!dpy) {
        return(1);
    }


    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();

    XScreenSaverInfo *info = XScreenSaverAllocInfo();
    XScreenSaverQueryInfo(dpy, DefaultRootWindow(dpy), info);
    printf(" idle time is %u\n", info->idle);
}
