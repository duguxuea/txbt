#include "MainMenuBar.h"
#include <QtWidgets/QVBoxLayout>
#include <QLabel>
#include <QPushButton>
#include <qbitmap.h>

MainMenuBar::MainMenuBar(QWidget *parent)
{
	setFixedSize(1200, 20);
	//QPalette pal(this->palette());
	//���ñ���
	//pal.setColor(QPalette::Background, Qt::red);
	//this->setAutoFillBackground(true);
	//this->setPalette(pal);


	this->setAutoFillBackground(true);//���ô����Զ���䱳��
	QPixmap pixmap("images/mainwindow/mainmenu_bak.png");//�趨ͼƬ
	QPalette palette;//����һ����ɫ�����
	palette.setBrush(this->backgroundRole(), QBrush(pixmap));//�õ�ɫ��Ļ��ʰ�ӳ�䵽pixmap�ϵ�ͼƬ����frame.backgroundRole()���������
	this->setPalette(palette);//���ô��ڵ�ɫ��Ϊpalette�����ںͻ��������


	//�������
	QLabel * mylabel = new QLabel();
	mylabel->setText(QStringLiteral("����"));
	mylabel->setMargin(2);
	QLabel * mylabel2 = new QLabel();
	mylabel2->setText(QObject::tr("eeeee"));
	mylabel2->setMargin(2);


	//�Ҳఴť
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
