#include "txbtMainWindow.h"
#include <qdockwidget.h>
#include <qtextedit.h>

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
	mw = new MainWidget();
	this->setCentralWidget(mw);



	//QTextEdit *te = new QTextEdit("MainWindow", this);
	//te->setAlignment(Qt::AlignCenter);
	//setCentralWidget(te);
	//QDockWidget *dw1 = new QDockWidget("停靠窗口1", this);
	//dw1->setFeatures(QDockWidget::DockWidgetMovable | QDockWidget::DockWidgetClosable);//设置停靠窗口特性，可移动，可关闭
	//dw1->setAllowedAreas(Qt::LeftDockWidgetArea | Qt::RightDockWidgetArea);//设置可停靠区域为主窗口左边和右边
	//QTextEdit *dte = new QTextEdit("DockWindow First");
	//dw1->setWidget(dte);
	//addDockWidget(Qt::RightDockWidgetArea, dw1);
}
