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
	//QDockWidget *dw1 = new QDockWidget("ͣ������1", this);
	//dw1->setFeatures(QDockWidget::DockWidgetMovable | QDockWidget::DockWidgetClosable);//����ͣ���������ԣ����ƶ����ɹر�
	//dw1->setAllowedAreas(Qt::LeftDockWidgetArea | Qt::RightDockWidgetArea);//���ÿ�ͣ������Ϊ��������ߺ��ұ�
	//QTextEdit *dte = new QTextEdit("DockWindow First");
	//dw1->setWidget(dte);
	//addDockWidget(Qt::RightDockWidgetArea, dw1);
}
