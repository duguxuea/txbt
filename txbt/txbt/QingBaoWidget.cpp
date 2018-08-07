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


	QVBoxLayout * vl = new QVBoxLayout(this);
	vl->addWidget(pTable);
	this->setLayout(vl);
}

QingBaoWidget::~QingBaoWidget()
{
}
