#include "check.h"
#include <QtWidgets/QApplication>
#include<QFile>
#include<QMessageBox>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
   
	QFile qss("./b.qss");
	if (qss.open(QFile::ReadOnly)) {
		QString style = QLatin1String(qss.readAll());
		a.setStyleSheet(style);
		qss.close();
	}
	else {
		QMessageBox::warning(nullptr, "warning", "Open failed", QMessageBox::Yes | QMessageBox::No, QMessageBox::Yes);
	}
	check w;
	w.resize(1900, 1080);
	w.setWindowTitle(QString::fromUtf8("check message"));
	w.show();
	return a.exec();
}
