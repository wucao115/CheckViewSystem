#pragma once

#include <QDialog>
#include "ui_mychart.h"
#include <QMessageBox>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QDebug>
#include <QListWidget>
#include <QStandardItem>
#include <QStandardItemModel>
#include <QDateTime>
#include <QString>
#include <QVector>

class mychart : public QDialog
{
	Q_OBJECT

private slots:
	void getMeg(QString,QVector<QStringList>);
	void refresh();
	void saveRoute();
	void saveMeg();
	void setRoute(QModelIndex);
public:
	mychart(QWidget *parent = Q_NULLPTR);
	~mychart();

private:
	Ui::mychart ui;
	QStringList list;
	QSqlDatabase db;
	QVector<QStringList> vec1;
	QStandardItemModel *standItemModel;
	QString routeStr;
};
