#include "MainMenuBar.h"


MainMenuBar::MainMenuBar(QWidget *parent)
{
	this->setObjectName(QStringLiteral("MainMenuBar"));

	//�������
	//���
	qianlogo = new QLabel();
	qianlogo->setObjectName("qianlogo");
	qianlabel = new QLabel();
	qianlabel->setText("10000");
	qianlabel->setMargin(2);

	//����
	shengwanglogo = new QLabel();
	shengwanglogo->setObjectName("shengwanglogo");
	QLabel * shengwanglabel = new QLabel();
	shengwanglabel->setText("10000");
	shengwanglabel->setMargin(2);

	//�ƽ�
	huangjinlogo = new QLabel();
	huangjinlogo->setObjectName("huangjinlogo");
	huangjinlabel = new QLabel();
	huangjinlabel->setText("10000");
	huangjinlabel->setMargin(2);

	//ľͷ
	mutoulogo = new QLabel();
	mutoulogo->setObjectName("mutoulogo");
	mutoulabel = new QLabel();
	mutoulabel->setText("10000");
	mutoulabel->setMargin(2);

	//ʯͷ
	shitoulogo = new QLabel();
	shitoulogo->setObjectName("shitoulogo");
	shitoulabel = new QLabel();
	shitoulabel->setText("10000");
	shitoulabel->setMargin(2);

	//����
	tiekuanglogo = new QLabel();
	tiekuanglogo->setObjectName("tiekuanglogo");
	tiekuanglabel = new QLabel();
	tiekuanglabel->setText("10000");
	tiekuanglabel->setMargin(2);

	//��ҩ
	caoyaologo = new QLabel();
	caoyaologo->setObjectName("caoyaologo");
	caoyaolabel = new QLabel();
	caoyaolabel->setText("10000");
	caoyaolabel->setMargin(2);

	//�Ҳఴť
	pBtnWuXue = new QPushButton();//��ѧ
	pBtnWuXue->setObjectName("pBtnWuXue");
	pBtnQingBao = new QPushButton();//�鱨
	pBtnQingBao->setObjectName("pBtnQingBao");
	pBtnSystem = new QPushButton();//ϵͳ
	pBtnSystem->setObjectName("pBtnSystem");

	//add
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
