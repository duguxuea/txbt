#include "MainMenuBar.h"
#include <QtWidgets/QVBoxLayout>
#include <QLabel>
#include <QPushButton>
#include <qbitmap.h>

MainMenuBar::MainMenuBar(QWidget *parent)
{
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
	qianlabel->setStyleSheet("color:#fff2c9;font-size:20px");
	qianlabel->setMargin(2);

	//����
	QLabel * shengwanglogo = new QLabel();
	shengwanglogo->setMargin(0);
	shengwanglogo->setPixmap(QPixmap("images/mainwindow/shengwang.jpg"));
	QLabel * shengwanglabel = new QLabel();
	shengwanglabel->setText("10000");
	shengwanglabel->setStyleSheet("color:#fff2c9;font-size:20px");
	shengwanglabel->setMargin(2);

	//�ƽ�
	QLabel * huangjinlogo = new QLabel();
	huangjinlogo->setMargin(0);
	huangjinlogo->setPixmap(QPixmap("images/mainwindow/huangjin.jpg"));
	QLabel * huangjinlabel = new QLabel();
	huangjinlabel->setText("10000");
	huangjinlabel->setStyleSheet("color:#fff2c9;font-size:20px");
	huangjinlabel->setMargin(2);

	//ľͷ
	QLabel * mutoulogo = new QLabel();
	mutoulogo->setMargin(0);
	mutoulogo->setPixmap(QPixmap("images/mainwindow/mutou.jpg"));
	QLabel * mutoulabel = new QLabel();
	mutoulabel->setText("10000");
	mutoulabel->setStyleSheet("color:#fff2c9;font-size:20px");
	mutoulabel->setMargin(2);

	//ʯͷ
	QLabel * shitoulogo = new QLabel();
	shitoulogo->setMargin(0);
	shitoulogo->setPixmap(QPixmap("images/mainwindow/shitou.jpg"));
	QLabel * shitoulabel = new QLabel();
	shitoulabel->setText("10000");
	shitoulabel->setStyleSheet("color:#fff2c9;font-size:20px");
	shitoulabel->setMargin(2);

	//����
	QLabel * tiekuanglogo = new QLabel();
	tiekuanglogo->setMargin(0);
	tiekuanglogo->setPixmap(QPixmap("images/mainwindow/tiekuang.jpg"));
	QLabel * tiekuanglabel = new QLabel();
	tiekuanglabel->setText("10000");
	tiekuanglabel->setStyleSheet("color:#fff2c9;font-size:20px");
	tiekuanglabel->setMargin(2);

	//��ҩ
	QLabel * caoyaologo = new QLabel();
	caoyaologo->setMargin(0);
	caoyaologo->setPixmap(QPixmap("images/mainwindow/caoyao.jpg"));
	QLabel * caoyaolabel = new QLabel();
	caoyaolabel->setText("10000");
	caoyaolabel->setStyleSheet("color:#fff2c9;font-size:20px");
	caoyaolabel->setMargin(2);

	//�Ҳఴť
	QPushButton *pButWuXue = new QPushButton();
	//QPixmap QPWuXue("images/mainwindow/wuxue.jpg");
	//pButWuXue->setIcon(QPWuXue);
	pButWuXue ->setStyleSheet(tr("background-image: url(:/icon/res/icon/wall.png);"));
	

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


	layout->addStretch();
	layout->addWidget(pButWuXue);

	this->setLayout(layout);
}


MainMenuBar::~MainMenuBar()
{
}
