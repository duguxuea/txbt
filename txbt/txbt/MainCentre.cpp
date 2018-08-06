#include "MainCentre.h"
#include <QtWidgets/QVBoxLayout>
#include <QLabel>

MainCentre::MainCentre(QWidget *parent)
{

	this->setObjectName(QStringLiteral("MainCentre"));
	QSize(1200, 700);
	QLabel * mylabel = new QLabel();
	QString str = QStringLiteral("Ö÷»­Ãæ");
	mylabel->setText(str);
	QHBoxLayout * layout = new QHBoxLayout();
	layout->addWidget(mylabel);
	this->setLayout(layout);
}


MainCentre::~MainCentre()
{
}
