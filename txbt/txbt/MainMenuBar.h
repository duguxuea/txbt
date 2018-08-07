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
	QLabel * qianlogo;//金币
	QLabel * qianlabel;
	QLabel * shengwanglogo;//声望
	QLabel * shengwanglabel;
	QLabel * huangjinlogo;//黄金
	QLabel * huangjinlabel;
	QLabel * mutoulogo;//木头
	QLabel * mutoulabel;
	QLabel * shitoulogo;//石头
	QLabel * shitoulabel;
	QLabel * tiekuanglogo;//铁矿
	QLabel * tiekuanglabel;
	QLabel * caoyaologo;//草药
	QLabel * caoyaolabel;
	QPushButton *pBtnWuXue;//武学
	QPushButton *pBtnQingBao;//情报
	QPushButton *pBtnSystem;//系统

};

