#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_check.h"
#include "xianshi.h"
#include "mychart.h"
#include <QMessageBox>
#include <QSqlDatabase>
#include <QSqlQuery>
#include<QDebug>
#include<QListWidget>
#include <QStandardItem>
#include <QStandardItemModel>
#include <QTreeView>
#include <QTableView>
#include <QHeaderView>
#include <QTcpSocket>
#include<QDateTime>
#include<QFile>
#include<QFileDialog>
#include<QString>
#include<QVector>
#include <QHostAddress>
#include <QtWebEngineWidgets>

class check : public QMainWindow
{
	Q_OBJECT

public:
    check(QWidget *parent = Q_NULLPTR);
	~check();
private slots:

	void sockcon();
	void dissock();
	void loadroute();
	void consql(const QModelIndex &index);//连接sql
	void mapviwe(const QModelIndex &index);//地图显示
	void reload(const QModelIndex &index);
	void emchart(const QModelIndex &index);
	void senddata();
	void saveMegD();
	
signals:
	void transEChart(QVector<QString>, QVector<QString>, QVector<QDate>);
signals:
	void echartshow();
signals:
	void transSaveMeg(QString,QVector<QStringList>);
	
private:
	QVector<QStringList> vecList;
	QRect clientRect;
	QStandardItemModel *standItemModel;
	QTcpSocket  *tcpSocket;//通信套接字
	QByteArray array; //接收的数据
	QSqlDatabase db;//mysql
	xianshi* ECharts;
	mychart* saveMeg;
	QString filename;
    Ui::checkClass ui;
	int routei;
	int routej;
};
