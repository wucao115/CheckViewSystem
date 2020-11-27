#include "xianshi.h"
#include <QJsonObject>
#include <QJsonArray>
#include <QJsonDocument>

xianshi::xianshi(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	connect(ui.webEngineView, SIGNAL(loadFinished(bool)), this, SLOT(send()));
}

xianshi::~xianshi()
{
}

void xianshi::EchartV(QVector<QString> arr1, QVector<QString> arr2, QVector<QDate> arr3)
{
	QJsonArray A1json, A2json, A3json;
	for (int i = 0; i < arr1.size(); ++i)
	{
		A1json.append(arr1[i]);
		A2json.append(arr2[i]);
		A3json.append(arr3[i].toString("yyyy-MM-dd"));
	} 
	//构建Json数组
	QJsonObject json;
	json.insert("PH", A1json);
	json.insert("TEMP", A2json);
	json.insert("date", A3json);

	QString str = QJsonDocument(json).toJson();
	QString command = QString("init2(%1);").arg(str);
	ui.webEngineView->page()->runJavaScript(command);	
}
void xianshi::slot()
{
	QString path = QDir::currentPath();
	QUrl url(path.append("/html/t2.html"));
	ui.webEngineView->load(url);
}

void xianshi::send()
{
	emit senddata1();
}
