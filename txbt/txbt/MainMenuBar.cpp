#include "MainMenuBar.h"


MainMenuBar::MainMenuBar(QWidget *parent)
{
	this->setObjectName(QStringLiteral("MainMenuBar"));

	//左侧属性
	//金币
	qianlogo = new QLabel();
	qianlogo->setObjectName("qianlogo");
	qianlabel = new QLabel();
	qianlabel->setText("10000");
	qianlabel->setMargin(2);

	//声望
	shengwanglogo = new QLabel();
	shengwanglogo->setObjectName("shengwanglogo");
	QLabel * shengwanglabel = new QLabel();
	shengwanglabel->setText("10000");
	shengwanglabel->setMargin(2);

	//黄金
	huangjinlogo = new QLabel();
	huangjinlogo->setObjectName("huangjinlogo");
	huangjinlabel = new QLabel();
	huangjinlabel->setText("10000");
	huangjinlabel->setMargin(2);

	//木头
	mutoulogo = new QLabel();
	mutoulogo->setObjectName("mutoulogo");
	mutoulabel = new QLabel();
	mutoulabel->setText("10000");
	mutoulabel->setMargin(2);

	//石头
	shitoulogo = new QLabel();
	shitoulogo->setObjectName("shitoulogo");
	shitoulabel = new QLabel();
	shitoulabel->setText("10000");
	shitoulabel->setMargin(2);

	//铁矿
	tiekuanglogo = new QLabel();
	tiekuanglogo->setObjectName("tiekuanglogo");
	tiekuanglabel = new QLabel();
	tiekuanglabel->setText("10000");
	tiekuanglabel->setMargin(2);

	//草药
	caoyaologo = new QLabel();
	caoyaologo->setObjectName("caoyaologo");
	caoyaolabel = new QLabel();
	caoyaolabel->setText("10000");
	caoyaolabel->setMargin(2);

	//右侧按钮
	pBtnWuXue = new QPushButton();//武学
	pBtnWuXue->setObjectName("pBtnWuXue");
	pBtnQingBao = new QPushButton();//情报
	pBtnQingBao->setObjectName("pBtnQingBao");
	pBtnSystem = new QPushButton();//系统
	pBtnSystem->setObjectName("pBtnSystem");

	//add
	QHBoxLayout * layout = new QHBoxLayout();
	layout->setMargin(1);
	layout->addWidget(qianlogo);//钱
	layout->addWidget(qianlabel);
	layout->addWidget(shengwanglogo);//声望
	layout->addWidget(shengwanglabel);
	layout->addWidget(huangjinlogo);//黄金
	layout->addWidget(huangjinlabel);
	layout->addWidget(mutoulogo);//木头
	layout->addWidget(mutoulabel);
	layout->addWidget(shitoulogo);//石头
	layout->addWidget(shitoulabel);
	layout->addWidget(tiekuanglogo);//铁矿
	layout->addWidget(tiekuanglabel);
	layout->addWidget(caoyaologo);//草药
	layout->addWidget(caoyaolabel);


	layout->addStretch();//中间支撑滑块
	layout->addWidget(pBtnWuXue);//武学
	layout->addWidget(pBtnQingBao);//情报
	layout->addWidget(pBtnSystem);//系统

	this->setLayout(layout);
}


MainMenuBar::~MainMenuBar()
{
}
