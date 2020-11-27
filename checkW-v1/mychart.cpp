#include "mychart.h"

#include <qtextcodec.h>

mychart::mychart(QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);
	standItemModel = new QStandardItemModel();
	standItemModel->setColumnCount(1);
	standItemModel->setHeaderData(0, Qt::Horizontal, QStringLiteral("历史检测线路"));
	ui.tableView->setModel(standItemModel);
	ui.tableView->horizontalHeader()->setDefaultAlignment(Qt::AlignCenter);        //表头信息显示居中
	ui.tableView->horizontalHeader()->setSectionResizeMode(0, QHeaderView::Stretch);  
	ui.tableView->verticalHeader()->hide();    //隐藏默认显示的行头
	ui.tableView->setSelectionBehavior(QAbstractItemView::SelectRows); //设置选中时整行选中
	ui.tableView->setEditTriggers(QAbstractItemView::NoEditTriggers);  //设置表格属性只读，不能编辑

	db = QSqlDatabase::addDatabase("QMYSQL");
	db.setHostName("112.124.21.139");
	db.setDatabaseName("checkroute");       //这里输入你的数据库名
	db.setUserName("root");
	db.setPassword("1234");   //这里输入你的密码

	if (!db.open()) {
		QMessageBox::critical(0, QObject::tr("cannot open mysql"),
			"cannot connect mysql!", QMessageBox::Cancel);
	}
	QSqlQuery query1 = QSqlQuery(db);
	query1.exec("SELECT * FROM routetable");
	while (query1.next()) {
		QString str = query1.value(1).toString();
		list.append(str);
	}
	for (int i = 0; i < list.size();i++) {
		QStandardItem *standItem1 = new QStandardItem(tr("%1").arg(list[i]));
		standItemModel->setItem(i, 0, standItem1);
		standItemModel->item(i, 0)->setTextAlignment(Qt::AlignCenter);
		ui.tableView->setModel(standItemModel);
	}
	connect(ui.pushButton, SIGNAL(clicked()), this, SLOT(refresh()));
	connect(ui.pushButton_2, SIGNAL(clicked()), this, SLOT(saveRoute()));
	connect(ui.pushButton_3, SIGNAL(clicked()), this, SLOT(saveMeg()));
	connect(ui.tableView, SIGNAL(clicked(QModelIndex)), this, SLOT(setRoute(QModelIndex)));
}
mychart::~mychart()
{
	delete standItemModel;
}

void mychart::getMeg(QString str,QVector<QStringList> vec)
{
	QStringList s = str.split(".");
	QTextCodec *codec = QTextCodec::codecForName("GBK");
	QString st = codec->toUnicode("目前检测路线名为: "); 
	st += s[0];
	ui.lineEdit->setPlaceholderText(st);
	vec1 = vec;
}



void mychart::refresh()
{
	QAbstractItemModel* model = ui.tableView->model();
	QItemSelectionModel *selections = ui.tableView->selectionModel();
	QModelIndexList selected = selections->selectedIndexes();
	QMap<int, int> rows;
	foreach(QModelIndex index, selected)
		rows.insert(index.row(), 0);
	QMapIterator<int, int> r(rows);
	r.toBack();
	while (r.hasPrevious()) {
		r.previous();
		model->removeRow(r.key());
	}
}

void mychart::saveRoute()
{
	routeStr = ui.lineEdit->text();
	if (list.contains(routeStr)) {
		return;
	}
	else {
		QStandardItem *standItem1 = new QStandardItem(tr("%1").arg(routeStr));
		QAbstractItemModel* model = ui.tableView->model();
		int i = model->rowCount();
		standItemModel->setItem(i, 0, standItem1);
		standItemModel->item(i, 0)->setTextAlignment(Qt::AlignCenter);
		ui.tableView->setModel(standItemModel);
	}
}

void mychart::saveMeg()
{
	QSqlQuery query2 = QSqlQuery(db);
	if (list.contains(routeStr)) {
		query2.prepare("SELECT rid FROM routetable WHERE  route like ?");
		query2.addBindValue(routeStr);
		query2.exec();
		QString id;
		while(query2.next())
			id = query2.value(0).toString();
		for (int i = 0; i < vec1.size(); i++) {
			QString pid = id + "*" + QString::number(i+1);
			QString PH = vec1.at(i).at(3);
			QString TEMP = vec1.at(i).at(4);
			QString time = vec1.at(i).at(5);
			QString routeid = id;
			query2.prepare("insert INTO checkmeg (PH,TEMP,time,pointid,routeid) VALUES(?,?,?,?,?)");
			query2.addBindValue(PH);
			query2.addBindValue(TEMP);
			query2.addBindValue(time);
			query2.addBindValue(pid);
			query2.addBindValue(routeid);
			query2.exec();
		}
	}
	else {
		if (!vec1.isEmpty()) {
			query2.prepare("insert INTO routetable (route) VALUES(?)");
			query2.addBindValue(routeStr);
			query2.exec();
			query2.prepare("SELECT rid FROM routetable WHERE  route like ?");
			query2.addBindValue(routeStr);
			query2.exec();
			QString id;
			while (query2.next())
				id = query2.value(0).toString();
			for (int i = 0; i < vec1.size(); i++) {
				QString pid = id + "*" + QString::number(i + 1);
				QString lat = vec1.at(i).at(1);
				QString lon = vec1.at(i).at(2);
				QString routeid = id;
				QString PH = vec1.at(i).at(3);
				QString TEMP = vec1.at(i).at(4);
				QString time = vec1.at(i).at(5);
				query2.prepare("insert INTO checkpoint (pid,lat,lon,routeid) VALUES(?,?,?,?)");
				query2.addBindValue(pid);
				query2.addBindValue(lat);
				query2.addBindValue(lon);
				query2.addBindValue(routeid);
				query2.exec();
				query2.prepare("insert INTO checkmeg (PH,TEMP,time,pointid,routeid) VALUES(?,?,?,?,?)");
				query2.addBindValue(PH);
				query2.addBindValue(TEMP);
				query2.addBindValue(time);
				query2.addBindValue(pid);
				query2.addBindValue(routeid);
				query2.exec();
			}

		}
	}
	emit close();
}

void mychart::setRoute(QModelIndex index)
{
	QAbstractItemModel* model = ui.tableView->model();
	int i = index.row();
	ui.lineEdit->setText(model->data(index).toString());
	routeStr = ui.lineEdit->text();
}
