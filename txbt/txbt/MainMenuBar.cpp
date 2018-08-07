#include "MainMenuBar.h"
#include <QtWidgets/QVBoxLayout>
#include <QLabel>
#include <QPushButton>
#include <qbitmap.h>
#include <qfile.h>
#include <qtextstream.h>

MainMenuBar::MainMenuBar(QWidget *parent)
{
	this->setObjectName(QStringLiteral("MainMenuBar"));
	setFixedSize(1200, 28);
	this->setAutoFillBackground(true);//���ô����Զ���䱳��
	QPixmap pixmap("images/mainwindow/mainmenu_bak.jpg");//�趨ͼƬ
	QPalette palette;//����һ����ɫ�����
	palette.setBrush(this->backgroundRole(), QBrush(pixmap));//�õ�ɫ��Ļ��ʰ�ӳ�䵽pixmap�ϵ�ͼƬ����frame.backgroundRole()���������
	this->setPalette(palette);//���ô��ڵ�ɫ��Ϊpalette�����ںͻ��������

	//�������
	//���
	QLabel * qianlogo = new QLabel();
	//qianlogo->setText(QStringLiteral("����"));
	qianlogo->setMargin(0);
	qianlogo->setPixmap(QPixmap("images/mainwindow/qianbi.jpg"));
	QLabel * qianlabel = new QLabel();
	qianlabel->setText("10000");
	qianlabel->setMargin(2);

	//����
	QLabel * shengwanglogo = new QLabel();
	shengwanglogo->setMargin(0);
	shengwanglogo->setPixmap(QPixmap("images/mainwindow/shengwang.jpg"));
	QLabel * shengwanglabel = new QLabel();
	shengwanglabel->setText("10000");
	shengwanglabel->setMargin(2);

	//�ƽ�
	QLabel * huangjinlogo = new QLabel();
	huangjinlogo->setMargin(0);
	huangjinlogo->setPixmap(QPixmap("images/mainwindow/huangjin.jpg"));
	QLabel * huangjinlabel = new QLabel();
	huangjinlabel->setText("10000");
	huangjinlabel->setMargin(2);

	//ľͷ
	QLabel * mutoulogo = new QLabel();
	mutoulogo->setMargin(0);
	mutoulogo->setPixmap(QPixmap("images/mainwindow/mutou.jpg"));
	QLabel * mutoulabel = new QLabel();
	mutoulabel->setText("10000");
	mutoulabel->setMargin(2);

	//ʯͷ
	QLabel * shitoulogo = new QLabel();
	shitoulogo->setMargin(0);
	shitoulogo->setPixmap(QPixmap("images/mainwindow/shitou.jpg"));
	QLabel * shitoulabel = new QLabel();
	shitoulabel->setText("10000");
	shitoulabel->setMargin(2);

	//����
	QLabel * tiekuanglogo = new QLabel();
	tiekuanglogo->setMargin(0);
	tiekuanglogo->setPixmap(QPixmap("images/mainwindow/tiekuang.jpg"));
	QLabel * tiekuanglabel = new QLabel();
	tiekuanglabel->setText("10000");
	tiekuanglabel->setMargin(2);

	//��ҩ
	QLabel * caoyaologo = new QLabel();
	caoyaologo->setMargin(0);
	caoyaologo->setPixmap(QPixmap("images/mainwindow/caoyao.jpg"));
	QLabel * caoyaolabel = new QLabel();
	caoyaolabel->setText("10000");
	caoyaolabel->setMargin(2);

	//�Ҳఴť
	QPushButton *pBtnWuXue = new QPushButton();//��ѧ
	pBtnWuXue->setStyleSheet("QPushButton { background-image: url(images/mainwindow/wuxue.jpg);min-width:36;}");
	QPushButton *pBtnQingBao = new QPushButton();//�鱨
	pBtnQingBao->setStyleSheet("QPushButton { background-image: url(images/mainwindow/qingbao.jpg);min-width:38;}");
	QPushButton *pBtnSystem = new QPushButton();//ϵͳ
	pBtnSystem->setStyleSheet("QPushButton { background-image: url(images/mainwindow/system.jpg);}");

	QHBoxLayout * layout = new QHBoxLayout();
	layout->setMargin(1);
	layout->addWidget(qianlogo);//Ǯ
	layout->addWidget(qianlabel);
	layout->addWidget(shengwanglogo);//����
	layout->addWidget(shengwanglabel);
	layout->addWidget(huangjinlogo);//�ƽ�
	layout->addWidget(huangjinlabel);
	layout->addWidget(mutoulogo);//ľͷ
	layout->addWidget(mutoulabel);
	layout->addWidget(shitoulogo);//ʯͷ
	layout->addWidget(shitoulabel);
	layout->addWidget(tiekuanglogo);//����
	layout->addWidget(tiekuanglabel);
	layout->addWidget(caoyaologo);//��ҩ
	layout->addWidget(caoyaolabel);


	layout->addStretch();//�м�֧�Ż���
	layout->addWidget(pBtnWuXue);//��ѧ
	layout->addWidget(pBtnQingBao);//�鱨
	layout->addWidget(pBtnSystem);//ϵͳ

	this->setLayout(layout);
}


MainMenuBar::~MainMenuBar()
{
}
