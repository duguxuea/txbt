#include "MainCentre.h"
#include <QtWidgets/QVBoxLayout>
#include <QLabel>

MainCentre::MainCentre(QWidget *parent)
{
	QSize(1200, 700);
	QLabel * mylabel = new QLabel();
	QString str = "Ö÷»­Ãæ";
	mylabel->setText(str);
	QHBoxLayout * layout = new QHBoxLayout();
	layout->addWidget(mylabel);
	this->setLayout(layout);
}


MainCentre::~MainCentre()
{
}
