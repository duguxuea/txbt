#include "QingBaoWidget.h"
#include <qstandarditemmodel.h>
#include <qtableview.h>
#include <QtWidgets/QVBoxLayout>
#include <qfile.h>
#include <qtextstream.h>
#include "QingBaoWidget.h"

QingBaoWidget::QingBaoWidget(QWidget *parent)
	: QWidget(parent)
{

	QFile file("qss/table.qss");
	file.open(QFile::ReadOnly);
	QTextStream filetext(&file);
	QString stylesheet = filetext.readAll();
	this->setStyleSheet(stylesheet);
	file.close();


	// 设置表头
	QStandardItemModel *studentModel = new QStandardItemModel();
	studentModel->setHorizontalHeaderItem(0, new QStandardItem(QStringLiteral("门派")));
	studentModel->setHorizontalHeaderItem(1, new QStandardItem(QStringLiteral("地点")));
	studentModel->setHorizontalHeaderItem(2, new QStandardItem(QStringLiteral("姓名")));
	studentModel->setHorizontalHeaderItem(3, new QStandardItem(QStringLiteral("职务")));
	studentModel->setHorizontalHeaderItem(4, new QStandardItem(QStringLiteral("等级")));
	studentModel->setHorizontalHeaderItem(5, new QStandardItem(QStringLiteral("健康")));
	studentModel->setHorizontalHeaderItem(6, new QStandardItem(QStringLiteral("忠诚")));
	studentModel->setHorizontalHeaderItem(7, new QStandardItem(QStringLiteral("精力")));
	studentModel->setHorizontalHeaderItem(8, new QStandardItem(QStringLiteral("智慧")));
	studentModel->setHorizontalHeaderItem(9, new QStandardItem(QStringLiteral("轻功")));
	studentModel->setHorizontalHeaderItem(10, new QStandardItem(QStringLiteral("暗器")));
	studentModel->setHorizontalHeaderItem(11, new QStandardItem(QStringLiteral("内力")));
	studentModel->setHorizontalHeaderItem(12, new QStandardItem(QStringLiteral("臂力")));
	studentModel->setHorizontalHeaderItem(13, new QStandardItem(QStringLiteral("腰力")));
	studentModel->setHorizontalHeaderItem(14, new QStandardItem(QStringLiteral("腿力")));

	QTableView * pTable = new QTableView(this);
	pTable->setModel(studentModel);
	pTable->setSelectionBehavior(QAbstractItemView::SelectRows);// 整行选中
	pTable->setEditTriggers(QAbstractItemView::NoEditTriggers);// 不可编辑


	// 添加行
	studentModel->setItem(0, 0, new QStandardItem(QStringLiteral("华山派")));//门派
	studentModel->setItem(0, 1, new QStandardItem(QStringLiteral("华山总舵")));//地点
	studentModel->setItem(0, 2, new QStandardItem(QStringLiteral("岳不群")));//姓名
	studentModel->setItem(0, 3, new QStandardItem(QStringLiteral("掌门")));//职务
	studentModel->setItem(0, 4, new QStandardItem("20"));//等级
	studentModel->setItem(0, 5, new QStandardItem("17000/18000"));//健康
	studentModel->setItem(0, 6, new QStandardItem("100"));//忠诚
	studentModel->setItem(0, 7, new QStandardItem("100"));//精力
	studentModel->setItem(0, 8, new QStandardItem("100"));//智慧
	studentModel->setItem(0, 9, new QStandardItem("230"));//轻功
	studentModel->setItem(0, 10, new QStandardItem("210"));//暗器
	studentModel->setItem(0, 11, new QStandardItem("300"));//内力
	studentModel->setItem(0, 12, new QStandardItem("270"));//臂力
	studentModel->setItem(0, 13, new QStandardItem("230"));//腰力
	studentModel->setItem(0, 14, new QStandardItem("240"));//腿力


	QVBoxLayout * vl = new QVBoxLayout(this);
	vl->addWidget(pTable);
	this->setLayout(vl);
}

QingBaoWidget::~QingBaoWidget()
{
}
