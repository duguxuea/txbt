#include "txbtMainWindow.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	txbtMainWindow w;
	w.show();
	return a.exec();
}
