#include "MainMenuBar.h"
#include <QtWidgets/QVBoxLayout>
#include <QLabel>
#include <QPushButton>
#include <qbitmap.h>

MainMenuBar::MainMenuBar(QWidget *parent)
{
	setFixedSize(1200, 28);
	this->setAutoFillBackground(true);//设置窗体自动填充背景
	QPixmap pixmap("images/mainwindow/mainmenu_bak.jpg");//设定图片
	QPalette palette;//创建一个调色板对象
	palette.setBrush(this->backgroundRole(), QBrush(pixmap));//用调色板的画笔把映射到pixmap上的图片画到frame.backgroundRole()这个背景上
	this->setPalette(palette);//设置窗口调色板为palette，窗口和画笔相关联

	//左侧属性
	//金币
	QLabel * qianlogo = new QLabel();
	//qianlogo->setText(QStringLiteral("中文"));
	qianlogo->setMargin(0);
	qianlogo->setPixmap(QPixmap("images/mainwindow/qianbi.jpg"));
	QLabel * qianlabel = new QLabel();
	qianlabel->setText("10000");
	qianlabel->setStyleSheet("color:#fff2c9;font-size:20px");
	qianlabel->setMargin(2);

	//声望
	QLabel * shengwanglogo = new QLabel();
	shengwanglogo->setMargin(0);
	shengwanglogo->setPixmap(QPixmap("images/mainwindow/shengwang.jpg"));
	QLabel * shengwanglabel = new QLabel();
	shengwanglabel->setText("10000");
	shengwanglabel->setStyleSheet("color:#fff2c9;font-size:20px");
	shengwanglabel->setMargin(2);

	//黄金
	QLabel * huangjinlogo = new QLabel();
	huangjinlogo->setMargin(0);
	huangjinlogo->setPixmap(QPixmap("images/mainwindow/huangjin.jpg"));
	QLabel * huangjinlabel = new QLabel();
	huangjinlabel->setText("10000");
	huangjinlabel->setStyleSheet("color:#fff2c9;font-size:20px");
	huangjinlabel->setMargin(2);

	//木头
	QLabel * mutoulogo = new QLabel();
	mutoulogo->setMargin(0);
	mutoulogo->setPixmap(QPixmap("images/mainwindow/mutou.jpg"));
	QLabel * mutoulabel = new QLabel();
	mutoulabel->setText("10000");
	mutoulabel->setStyleSheet("color:#fff2c9;font-size:20px");
	mutoulabel->setMargin(2);

	//石头
	QLabel * shitoulogo = new QLabel();
	shitoulogo->setMargin(0);
	shitoulogo->setPixmap(QPixmap("images/mainwindow/shitou.jpg"));
	QLabel * shitoulabel = new QLabel();
	shitoulabel->setText("10000");
	shitoulabel->setStyleSheet("color:#fff2c9;font-size:20px");
	shitoulabel->setMargin(2);

	//铁矿
	QLabel * tiekuanglogo = new QLabel();
	tiekuanglogo->setMargin(0);
	tiekuanglogo->setPixmap(QPixmap("images/mainwindow/tiekuang.jpg"));
	QLabel * tiekuanglabel = new QLabel();
	tiekuanglabel->setText("10000");
	tiekuanglabel->setStyleSheet("color:#fff2c9;font-size:20px");
	tiekuanglabel->setMargin(2);

	//草药
	QLabel * caoyaologo = new QLabel();
	caoyaologo->setMargin(0);
	caoyaologo->setPixmap(QPixmap("images/mainwindow/caoyao.jpg"));
	QLabel * caoyaolabel = new QLabel();
	caoyaolabel->setText("10000");
	caoyaolabel->setStyleSheet("color:#fff2c9;font-size:20px");
	caoyaolabel->setMargin(2);

	//右侧按钮
	QPushButton *pButWuXue = new QPushButton();
	//QPixmap QPWuXue("images/mainwindow/wuxue.jpg");
	//pButWuXue->setIcon(QPWuXue);
	pButWuXue ->setStyleSheet(tr("background-image: url(:/icon/res/icon/wall.png);"));
	

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


	layout->addStretch();
	layout->addWidget(pButWuXue);

	this->setLayout(layout);
}


MainMenuBar::~MainMenuBar()
{
}
