#pragma once
#include <QWidget>
#include "ui_xianshi.h"
#include<QDate>
#include<QVector>
#include <QtWebEngineWidgets>

class xianshi : public QWidget
{
	Q_OBJECT

public:
	xianshi(QWidget *parent = Q_NULLPTR);
	~xianshi();
signals:
	void senddata1();
private slots:
	void slot();
	void send();
	void EchartV(QVector<QString>, QVector<QString>, QVector<QDate>);
private:
	Ui::xianshi ui;
};
