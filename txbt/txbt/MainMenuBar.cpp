#include "MainMenuBar.h"
#include <QtWidgets/QVBoxLayout>
#include <QLabel>
#include <QPushButton>
#include <qbitmap.h>

MainMenuBar::MainMenuBar(QWidget *parent)
{
	setFixedSize(1200, 20);
	//QPalette pal(this->palette());
	//设置背景
	//pal.setColor(QPalette::Background, Qt::red);
	//this->setAutoFillBackground(true);
	//this->setPalette(pal);


	this->setAutoFillBackground(true);//设置窗体自动填充背景
	QPixmap pixmap("images/mainwindow/mainmenu_bak.png");//设定图片
	QPalette palette;//创建一个调色板对象
	palette.setBrush(this->backgroundRole(), QBrush(pixmap));//用调色板的画笔把映射到pixmap上的图片画到frame.backgroundRole()这个背景上
	this->setPalette(palette);//设置窗口调色板为palette，窗口和画笔相关联


	//左侧属性
	QLabel * mylabel = new QLabel();
	mylabel->setText(QStringLiteral("中文"));
	mylabel->setMargin(2);
	QLabel * mylabel2 = new QLabel();
	mylabel2->setText(QObject::tr("eeeee"));
	mylabel2->setMargin(2);


	//右侧按钮
	QPushButton *pButton1 = new QPushButton("One");



	QHBoxLayout * layout = new QHBoxLayout();
	layout->setMargin(1);
	layout->addWidget(mylabel);
	layout->addWidget(mylabel2);
	layout->addStretch();
	layout->addWidget(pButton1);

	this->setLayout(layout);
}


MainMenuBar::~MainMenuBar()
{
}
