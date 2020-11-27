/********************************************************************************
** Form generated from reading UI file 'xianshi.ui'
**
** Created by: Qt User Interface Compiler version 5.12.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_XIANSHI_H
#define UI_XIANSHI_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWebEngineWidgets/QWebEngineView>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_xianshi
{
public:
    QHBoxLayout *horizontalLayout;
    QWebEngineView *webEngineView;

    void setupUi(QWidget *xianshi)
    {
        if (xianshi->objectName().isEmpty())
            xianshi->setObjectName(QString::fromUtf8("xianshi"));
        xianshi->resize(1000, 800);
        QIcon icon;
        icon.addFile(QString::fromUtf8("img/boat_783px_1224913_easyicon.net.png"), QSize(), QIcon::Normal, QIcon::Off);
        xianshi->setWindowIcon(icon);
        horizontalLayout = new QHBoxLayout(xianshi);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        webEngineView = new QWebEngineView(xianshi);
        webEngineView->setObjectName(QString::fromUtf8("webEngineView"));
        webEngineView->setProperty("url", QVariant(QUrl(QString::fromUtf8("about:blank"))));

        horizontalLayout->addWidget(webEngineView);


        retranslateUi(xianshi);

        QMetaObject::connectSlotsByName(xianshi);
    } // setupUi

    void retranslateUi(QWidget *xianshi)
    {
        xianshi->setWindowTitle(QApplication::translate("xianshi", "\345\217\230\345\214\226\346\233\262\347\272\277\345\233\276", nullptr));
    } // retranslateUi

};

namespace Ui {
    class xianshi: public Ui_xianshi {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_XIANSHI_H
