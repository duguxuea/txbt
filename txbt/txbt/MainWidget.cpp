#include "MainWidget.h"
#include "MainMenuBar.h"
#include "MainCentre.h"
#include "MainFoot.h"
#include <QtWidgets/QVBoxLayout>

//��������ô�ֱ����
MainWidget::MainWidget(QWidget *parent)
{
	QVBoxLayout * vl = new QVBoxLayout(this);
	//�˵���
	MainMenuBar * mb = new MainMenuBar(this);
	//������
	MainCentre * mc = new MainCentre(this);
	//�ײ�
	MainFoot * mf = new MainFoot(this);

	vl->addWidget(mb);
	vl->addWidget(mc);
	vl->addWidget(mf);
	this->setLayout(vl);
}


MainWidget::~MainWidget()
{
}
