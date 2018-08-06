#include "txbtMainWindow.h"
#include "MainWidget.h"
#include <qfile.h>
#include <qtextstream.h>

txbtMainWindow::txbtMainWindow(QWidget *parent)
	: QMainWindow(parent)
{
	QFile file("qss/main.qss");
	file.open(QFile::ReadOnly);
	QTextStream filetext(&file);
	QString stylesheet = filetext.readAll();
	this->setStyleSheet(stylesheet);
	file.close();

	setMinimumSize(1200, 800);
	MainWidget * mw = new MainWidget();
	this->setCentralWidget(mw);
}
