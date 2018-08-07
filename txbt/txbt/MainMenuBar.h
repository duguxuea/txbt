#pragma once
#include <QtWidgets/QWidget>
#include <QtWidgets/QVBoxLayout>
#include <QLabel>
#include <QPushButton>
#include <qbitmap.h>
#include <qfile.h>
#include <qtextstream.h>

class MainMenuBar:public QWidget
{
public:
	MainMenuBar(QWidget *parent = Q_NULLPTR);
	~MainMenuBar();
private:
	QLabel * qianlogo;//���
	QLabel * qianlabel;
	QLabel * shengwanglogo;//����
	QLabel * shengwanglabel;
	QLabel * huangjinlogo;//�ƽ�
	QLabel * huangjinlabel;
	QLabel * mutoulogo;//ľͷ
	QLabel * mutoulabel;
	QLabel * shitoulogo;//ʯͷ
	QLabel * shitoulabel;
	QLabel * tiekuanglogo;//����
	QLabel * tiekuanglabel;
	QLabel * caoyaologo;//��ҩ
	QLabel * caoyaolabel;
	QPushButton *pBtnWuXue;//��ѧ
	QPushButton *pBtnQingBao;//�鱨
	QPushButton *pBtnSystem;//ϵͳ

};

