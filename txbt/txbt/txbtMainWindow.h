#pragma once
#include <QtWidgets/QMainWindow>
#include <qfile.h>
#include <qtextstream.h>
#include "MainWidget.h"

class txbtMainWindow : public QMainWindow
{

public:
	txbtMainWindow(QWidget *parent = Q_NULLPTR);
private:
	MainWidget * mw;

};
