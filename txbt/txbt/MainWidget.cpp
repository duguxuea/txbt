#include "MainWidget.h"
#include "MainMenuBar.h"
#include "MainCentre.h"
#include "MainFoot.h"
#include <QtWidgets/QVBoxLayout>

//主窗体采用垂直布局
MainWidget::MainWidget(QWidget *parent)
{
	QVBoxLayout * vl = new QVBoxLayout(this);
	//菜单栏
	MainMenuBar * mb = new MainMenuBar(this);
	//主画面
	MainCentre * mc = new MainCentre(this);
	//底部
	MainFoot * mf = new MainFoot(this);

	vl->addWidget(mb);
	vl->addWidget(mc);
	vl->addWidget(mf);
	this->setLayout(vl);
}


MainWidget::~MainWidget()
{
}
