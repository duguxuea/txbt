#include "MainFoot.h"
#include <QtWidgets/QVBoxLayout>
#include <QLabel>

MainFoot::MainFoot(QWidget *parent)
{
	QSize(1200, 50);
	QLabel * mylabel = new QLabel();
	mylabel->setText(QObject::tr("rrrrrr"));
	QHBoxLayout * layout = new QHBoxLayout();
	layout->addWidget(mylabel);
	this->setLayout(layout);
}


MainFoot::~MainFoot()
{
}
