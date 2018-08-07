#include "MainCentre.h"
#include <QtWidgets/QVBoxLayout>
#include <QLabel>
#include <qfile.h>
#include <qtextstream.h>
#include <qstandarditemmodel.h>
#include <qtableview.h>

MainCentre::MainCentre(QWidget *parent)
{
	QFile file("qss/table.qss");
	file.open(QFile::ReadOnly);
	QTextStream filetext(&file);
	QString stylesheet = filetext.readAll();
	this->setStyleSheet(stylesheet);
	file.close();

	this->setObjectName(QStringLiteral("MainCentre"));
	QSize(1200, 700);
	QLabel * mylabel = new QLabel();
	QString str = QStringLiteral("������");
	mylabel->setText(str);



	// ���ñ�ͷ
	QStandardItemModel *studentModel = new QStandardItemModel();
	studentModel->setHorizontalHeaderItem(0, new QStandardItem(QStringLiteral("����")));
	studentModel->setHorizontalHeaderItem(1, new QStandardItem(QStringLiteral("�ص�")));
	studentModel->setHorizontalHeaderItem(2, new QStandardItem(QStringLiteral("����")));
	studentModel->setHorizontalHeaderItem(3, new QStandardItem(QStringLiteral("ְ��")));
	studentModel->setHorizontalHeaderItem(4, new QStandardItem(QStringLiteral("�ȼ�")));
	studentModel->setHorizontalHeaderItem(5, new QStandardItem(QStringLiteral("����")));
	studentModel->setHorizontalHeaderItem(6, new QStandardItem(QStringLiteral("�ҳ�")));
	studentModel->setHorizontalHeaderItem(7, new QStandardItem(QStringLiteral("����")));
	studentModel->setHorizontalHeaderItem(8, new QStandardItem(QStringLiteral("�ǻ�")));
	studentModel->setHorizontalHeaderItem(9, new QStandardItem(QStringLiteral("�Ṧ")));
	studentModel->setHorizontalHeaderItem(10, new QStandardItem(QStringLiteral("����")));
	studentModel->setHorizontalHeaderItem(11, new QStandardItem(QStringLiteral("����")));
	studentModel->setHorizontalHeaderItem(12, new QStandardItem(QStringLiteral("����")));
	studentModel->setHorizontalHeaderItem(13, new QStandardItem(QStringLiteral("����")));
	studentModel->setHorizontalHeaderItem(14, new QStandardItem(QStringLiteral("����")));

	QTableView * pTable = new QTableView(this);
	pTable->setModel(studentModel);
	pTable->setSelectionBehavior(QAbstractItemView::SelectRows);// ����ѡ��
	pTable->setEditTriggers(QAbstractItemView::NoEditTriggers);// ���ɱ༭


	// �����
	studentModel->setItem(0, 0, new QStandardItem(QStringLiteral("��ɽ��")));//����
	studentModel->setItem(0, 1, new QStandardItem(QStringLiteral("��ɽ�ܶ�")));//�ص�
	studentModel->setItem(0, 2, new QStandardItem(QStringLiteral("����Ⱥ")));//����
	studentModel->setItem(0, 3, new QStandardItem(QStringLiteral("����")));//ְ��
	studentModel->setItem(0, 4, new QStandardItem("20"));//�ȼ�
	studentModel->setItem(0, 5, new QStandardItem("17000/18000"));//����
	studentModel->setItem(0, 6, new QStandardItem("100"));//�ҳ�
	studentModel->setItem(0, 7, new QStandardItem("100"));//����
	studentModel->setItem(0, 8, new QStandardItem("100"));//�ǻ�
	studentModel->setItem(0, 9, new QStandardItem("230"));//�Ṧ
	studentModel->setItem(0, 10, new QStandardItem("210"));//����
	studentModel->setItem(0, 11, new QStandardItem("300"));//����
	studentModel->setItem(0, 12, new QStandardItem("270"));//����
	studentModel->setItem(0, 13, new QStandardItem("230"));//����
	studentModel->setItem(0, 14, new QStandardItem("240"));//����


	QHBoxLayout * layout = new QHBoxLayout();
	layout->addWidget(mylabel);
	layout->addWidget(pTable);
	this->setLayout(layout);
}


MainCentre::~MainCentre()
{
}
