#include "txbtMainWindow.h"
#include "MainWidget.h"

txbtMainWindow::txbtMainWindow(QWidget *parent)
	: QMainWindow(parent)
{
	setMinimumSize(1200, 800);
	MainWidget * mw = new MainWidget();
	this->setCentralWidget(mw);
	
}
