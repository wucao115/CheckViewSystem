#include "check.h"


check::check(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	/*检测表格设置***********************************************************************************************/
	standItemModel = new QStandardItemModel();
	standItemModel->setColumnCount(6);
	standItemModel->setHeaderData(0, Qt::Horizontal, QStringLiteral("检测点"));
	standItemModel->setHeaderData(1, Qt::Horizontal, QStringLiteral("纬度"));
	standItemModel->setHeaderData(2, Qt::Horizontal, QStringLiteral("经度"));
	standItemModel->setHeaderData(3, Qt::Horizontal, QStringLiteral("PH值"));
	standItemModel->setHeaderData(4, Qt::Horizontal, QStringLiteral("水温"));
	standItemModel->setHeaderData(5, Qt::Horizontal, QStringLiteral("检测时间"));
	ui.tableView->setModel(standItemModel);
	ui.tableView->horizontalHeader()->setDefaultAlignment(Qt::AlignCenter);        //表头信息显示居中
	ui.tableView->horizontalHeader()->setSectionResizeMode(0, QHeaderView::Fixed);  //设定表头列宽不可变
	ui.tableView->horizontalHeader()->setSectionResizeMode(1, QHeaderView::Stretch);
	ui.tableView->horizontalHeader()->setSectionResizeMode(4, QHeaderView::Fixed);
	ui.tableView->horizontalHeader()->setSectionResizeMode(3, QHeaderView::Fixed);
	ui.tableView->horizontalHeader()->setSectionResizeMode(2, QHeaderView::Stretch);//设定第2列表头弹性拉伸
	ui.tableView->horizontalHeader()->setSectionResizeMode(5, QHeaderView::Stretch);
	ui.tableView->setColumnWidth(0, 100);       //设定表格第0列宽度
	ui.tableView->setColumnWidth(3, 130);       //设定表格第0列宽度
	ui.tableView->setColumnWidth(4, 130);
	ui.tableView->verticalHeader()->hide();    //隐藏默认显示的行头
	ui.tableView->setSelectionBehavior(QAbstractItemView::SelectRows); //设置选中时整行选中
	ui.tableView->setEditTriggers(QAbstractItemView::DoubleClicked);  //设置表格属性读写

	/*socket 编程*************************************************************************************/
	tcpSocket = nullptr;
	tcpSocket = new QTcpSocket(this);
	tcpSocket->abort();
	connect(tcpSocket, &QTcpSocket::connected, [=]() {
		ui.label->setText(QStringLiteral("连接成功"));
	});

	connect(tcpSocket, &QTcpSocket::readyRead, [=]() {
		//获取对方发送的内容
		array = tcpSocket->readAll();
		QString str = array;
		QDateTime current_date_time = QDateTime::currentDateTime();
		QString current_date = current_date_time.toString("yyyy.MM.dd hh:mm:ss");
		QStringList str1;
		str1 = str.split('*');

		/***以下连接PH之后打开*/
		//QString PH,TEMP;
		//if (str1.size() == 3) {
		//	int hit = str1[0].toInt() - 1;
		//	TEMP = str1[1];
		//	PH = str1[2];
		//	QStandardItem *standItem1 = new QStandardItem(tr("%1").arg(TEMP));
		//	QStandardItem *standItem2 = new QStandardItem(tr("%1").arg(current_date));
		//	QStandardItem *standItem3 = new QStandardItem(tr("%1").arg(PH));
		//	standItemModel->setItem(hit, 3, standItem2);
		//	standItemModel->setItem(hit, 4, standItem1);
		//	standItemModel->setItem(hit, 5, standItem2);
		//	standItemModel->item(hit, 3)->setTextAlignment(Qt::AlignCenter);
		//	//设置字符颜色
		//	standItemModel->item(hit, 4)->setTextAlignment(Qt::AlignCenter);
		//	standItemModel->item(hit, 5)->setTextAlignment(Qt::AlignCenter);
		//	ui.tableView->setModel(standItemModel);
		//}
		//else {
		//	QMessageBox::information(NULL, "Title", "no data about PH");
		//}

		QString TEMP;
		int hit = str1[0].toInt() - 1;
		TEMP = str1[1];
		QStandardItem *standItem1 = new QStandardItem(tr("%1").arg(TEMP));
		QStandardItem *standItem2 = new QStandardItem(tr("%1").arg(current_date));
		standItemModel->setItem(hit, 4, standItem1);
		standItemModel->setItem(hit, 5, standItem2);
		standItemModel->item(hit, 4)->setTextAlignment(Qt::AlignCenter);
		standItemModel->item(hit, 5)->setTextAlignment(Qt::AlignCenter);
		ui.tableView->setModel(standItemModel);
	});

	/*mysql**************************************************************/
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
	QStringList list;
	QVector<int> vec;
	while (query1.next()) {
		vec.push_back(query1.value(0).toInt());
		QString str = query1.value(1).toString();
		list.append(str);
	}
	ui.listWidget->addItems(list); //检测线路显示
	int size = vec.size();

	for (auto i : vec) {
		QStringList list1;
		query1.prepare("select pid,lat,lon from checkpoint where routeid=?");
		query1.bindValue(0, i);
		if (!query1.exec()) {
			qDebug() << "query error";
		}
		while (query1.next()) {
			QStringList s = query1.value(0).toString().split("*");
			QString str1 = s[1] + " lat:" + query1.value(1).toString() + ":lon:" + query1.value(2).toString();
			list1.append(str1);
		}
		vecList.push_back(list1);
	}
	for (int i = 0; i < vecList.size(); i++) {

		QListWidget* qlistwedget = new QListWidget();
		qlistwedget->addItems(vecList[i]);
		ui.stackedWidget->addWidget(qlistwedget);
		ui.stackedWidget->insertWidget(i, qlistwedget);
	}
	ui.listWidget->setCurrentRow(0);
	ui.stackedWidget->setStyleSheet("QStackedWidget{background:rgb(0,0,0);}");//设置显示效果
	ui.stackedWidget->setCurrentIndex(0);//设置默认页面为显示页面

	/*保存检测值*********************************************************/

	saveMeg = new mychart;
	connect(ui.pushButton_4, SIGNAL(clicked()), this, SLOT(saveMegD()));
	connect(this, SIGNAL(transSaveMeg(QString, QVector<QStringList>)), saveMeg, SLOT(getMeg(QString, QVector<QStringList>)));


	/*地图***************/
	QString path = QDir::currentPath();
	QUrl url(path.append("/test.html"));
	ui.webEngineView->load(url);

	connect(ui.pushButton, SIGNAL(clicked()), this, SLOT(sockcon()));
	connect(ui.pushButton_2, SIGNAL(clicked()), this, SLOT(dissock()));
	connect(ui.pushButton_3, SIGNAL(clicked()), this, SLOT(loadroute()));
	connect(ui.listWidget, SIGNAL(clicked(QModelIndex)), this, SLOT(consql(QModelIndex)));
	connect(ui.listWidget, SIGNAL(pressed(QModelIndex)), this, SLOT(reload(QModelIndex)));
	connect(ui.listWidget, SIGNAL(clicked(QModelIndex)), this, SLOT(mapviwe(QModelIndex)));

	/*二级list*/
	for (int i = 0; i < size; i++) {
		QWidget* p = ui.stackedWidget->widget(i);
		connect(p, SIGNAL(clicked(QModelIndex)), this, SLOT(emchart(QModelIndex)));
	}
	/*echart*/
	ECharts = new xianshi;
	routej = 0;
	routei = 0;
	connect(ECharts, SIGNAL(senddata1()), this, SLOT(senddata()));
	connect(this, SIGNAL(transEChart(QVector<QString>, QVector<QString>, QVector<QDate>)), ECharts, SLOT(EchartV(QVector<QString>, QVector<QString>, QVector<QDate>)));
	connect(this, SIGNAL(echartshow()), ECharts, SLOT(slot()));
}

check::~check()
{
	delete standItemModel;
	delete ECharts;
}

void check::sockcon() { //socket连接
	//获取服务器的ip和端口
	QString ip = "112.124.21.139";
	quint16 port = 12306;
	//主动和服务器建立连接
	tcpSocket->connectToHost(QHostAddress(ip), port);
	if (!tcpSocket->waitForConnected(30000))
	{
		QMessageBox::information(this, "socket connect failed", "server connect failed");
		return;
	}
}
void check::dissock() {
	if (nullptr == tcpSocket) {
		return;
	}
	//主动和客户端端口断开连接
	tcpSocket->disconnectFromHost();
	ui.label->setText(QStringLiteral("断开连接"));
}
void check::loadroute() {
	QVector<QStringList> sections;  
	QString fileName = QFileDialog::getOpenFileName(this, tr("file"), "", tr("text(*.waypoints)"));

	QFileInfo file(fileName);
	filename = file.fileName();

	if (!fileName.isNull()) {
		QFile file(fileName);
		if (!file.open(QFile::ReadOnly | QFile::Text)) {
			QMessageBox::warning(this, tr("Eorror"), tr("read file error:&1").arg(file.errorString()));
			return;
		}
		QTextStream in(&file);
		QVector<QString> strLine;
		int i = 0;
		while (!in.atEnd()) {
			strLine.push_back(in.readLine());
			sections.push_back(strLine[i].split("\t"));
			i++;
		}
	}
	else {
		qDebug() << "取消";
	}

	for (int i = 0; i < sections.size() - 2; i++) {
		if (sections[i + 2][8] == "0.00000000"&&sections[i + 2][9] == "0.00000000")
			continue;
		QStandardItem *standItem1 = new QStandardItem(tr("%1").arg(sections[i + 2][0]));
		QStandardItem *standItem2 = new QStandardItem(tr("%1").arg(sections[i + 2][8]));
		QStandardItem *standItem3 = new QStandardItem(tr("%1").arg(sections[i + 2][9]));
		standItemModel->setItem(i, 0, standItem1);//表格第i行，第0列添加一项内容
		standItemModel->setItem(i, 1, standItem2);
		standItemModel->setItem(i, 2, standItem3);
		//设置字符颜色
		standItemModel->item(i, 0)->setTextAlignment(Qt::AlignCenter);
		//设置字符颜色
		standItemModel->item(i, 1)->setTextAlignment(Qt::AlignCenter);
		//设置字符颜色
		standItemModel->item(i, 2)->setTextAlignment(Qt::AlignCenter);
	}
	ui.tableView->setModel(standItemModel);
}

void check::consql(const QModelIndex &index) {
	routei = index.row();
	int nCount = ui.stackedWidget->count();
	if (routei >= nCount)
		routei = 0;
	ui.stackedWidget->setCurrentIndex(routei);
	ui.stackedWidget->currentWidget();
}

void check::mapviwe(const QModelIndex & index)
{
	int i = index.row();
	QStringList list = vecList[i];
	QString strlat, strlon;
	//QVector<float> lat,lon;
	for (auto s : list) {
		QStringList sl = s.split(":");
		/*lat.push_back(sl[1].toFloat());
		lon.push_back(sl[3].toFloat());*/
		strlat += "*" + sl[1];
		strlon += "*" + sl[3];
	}
	strlat.insert(0, "\"");
	strlat += "\"";
	strlon.insert(0, "\"");
	strlon += "\"";
	/*for (int i = 0; i < list.size(); i++) {
		QString command = QString("doLocal(%1,%2,%3)").arg(QString::number(lon[i], 'f', 7)).arg(QString::number(lat[i], 'f', 7)).arg(QString::number(i+1));
		ui.webEngineView->page()->runJavaScript(command);
	}*/
	QString command = QString("doLocal(%1,%2,%3)").arg(strlon).arg(strlat).arg(list.size());
	ui.webEngineView->page()->runJavaScript(command);
}

void check::reload(const QModelIndex & index)
{
	ui.webEngineView->reload();
}

void check::emchart(const QModelIndex & index)
{
	routej = index.row();
	ECharts->show();
	emit echartshow();
}

void check::senddata()
{
	QSqlQuery query(db);
	QVector<QString> arr1;
	QVector<QString> arr2;
	QVector<QDate> arr3;
	QString str = QString::number(routei + 1) + "*" + QString::number(routej + 1);
	QString data = QString("select PH,TEMP,time from checkmeg where pointid = \"%1\";").arg(str);
	query.exec(data);

	while (query.next()) {
		//qDebug() << query.value(0).toFloat() << query.value(1).toFloat()<< query.value(2).toDate();
		arr1.push_back(query.value(0).toString());
		arr2.push_back(query.value(1).toString());
		arr3.push_back(query.value(2).toDate());
	}
	emit transEChart(arr1, arr2, arr3);
}

void check::saveMegD()
{
	QAbstractItemModel* model = ui.tableView->model();
	int count = model->rowCount();
	QVector<QStringList> vec;
	for (int i = 0; i < count; i++) {
		int j = 0;
		QStringList str;
		while (model->hasIndex(i, j)) {
			QModelIndex index = model->index(i, j);
			QString str1 = model->data(index).toString();
			str.push_back(str1);
			j++;
		}
		vec.push_back(str);
	}
	saveMeg->show();
	emit transSaveMeg(filename,vec);
}
