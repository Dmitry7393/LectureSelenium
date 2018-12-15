#include "Headers.h"
#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);

	webdriver::ViewCreator* wd = wd_setup(argc, argv);
	wd->RegisterViewClass<MainWindow>("MainWindow");

	MainWindow w;
	w.show();

	return a.exec();
}
