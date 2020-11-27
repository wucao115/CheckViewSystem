/********************************************************************************
** Form generated from reading UI file 'check.ui'
**
** Created by: Qt User Interface Compiler version 5.12.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHECK_H
#define UI_CHECK_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWebEngineWidgets/QWebEngineView>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_checkClass
{
public:
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout;
    QTabWidget *tabWidget;
    QWidget *tab;
    QHBoxLayout *horizontalLayout_2;
    QWidget *widget;
    QVBoxLayout *verticalLayout_3;
    QSpacerItem *verticalSpacer_6;
    QPushButton *pushButton;
    QSpacerItem *verticalSpacer_3;
    QLabel *label;
    QSpacerItem *verticalSpacer_4;
    QPushButton *pushButton_2;
    QSpacerItem *verticalSpacer;
    QPushButton *pushButton_3;
    QSpacerItem *verticalSpacer_2;
    QPushButton *pushButton_4;
    QSpacerItem *verticalSpacer_5;
    QTableView *tableView;
    QWidget *tab_2;
    QHBoxLayout *horizontalLayout_3;
    QListWidget *listWidget;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QWidget *page_2;
    QWebEngineView *webEngineView;

    void setupUi(QMainWindow *checkClass)
    {
        if (checkClass->objectName().isEmpty())
            checkClass->setObjectName(QString::fromUtf8("checkClass"));
        checkClass->resize(1269, 766);
        QIcon icon;
        icon.addFile(QString::fromUtf8("img/boat_783px_1224913_easyicon.net.png"), QSize(), QIcon::Normal, QIcon::Off);
        checkClass->setWindowIcon(icon);
        centralWidget = new QWidget(checkClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        horizontalLayout = new QHBoxLayout(centralWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        horizontalLayout_2 = new QHBoxLayout(tab);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setSizeConstraint(QLayout::SetMinAndMaxSize);
        widget = new QWidget(tab);
        widget->setObjectName(QString::fromUtf8("widget"));
        verticalLayout_3 = new QVBoxLayout(widget);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalSpacer_6 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_3->addItem(verticalSpacer_6);

        pushButton = new QPushButton(widget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/check/img/down2_blue.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon1);
        pushButton->setIconSize(QSize(20, 40));

        verticalLayout_3->addWidget(pushButton);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_3->addItem(verticalSpacer_3);

        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout_3->addWidget(label);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_3->addItem(verticalSpacer_4);

        pushButton_2 = new QPushButton(widget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/check/img/close_red.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon2);
        pushButton_2->setIconSize(QSize(20, 40));

        verticalLayout_3->addWidget(pushButton_2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);

        pushButton_3 = new QPushButton(widget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/check/img/right3_green.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_3->setIcon(icon3);
        pushButton_3->setIconSize(QSize(20, 40));

        verticalLayout_3->addWidget(pushButton_3);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_2);

        pushButton_4 = new QPushButton(widget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/check/img/set_orange.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_4->setIcon(icon4);
        pushButton_4->setIconSize(QSize(20, 40));

        verticalLayout_3->addWidget(pushButton_4);

        verticalSpacer_5 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_3->addItem(verticalSpacer_5);


        horizontalLayout_2->addWidget(widget);

        tableView = new QTableView(tab);
        tableView->setObjectName(QString::fromUtf8("tableView"));

        horizontalLayout_2->addWidget(tableView);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        horizontalLayout_3 = new QHBoxLayout(tab_2);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        listWidget = new QListWidget(tab_2);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(listWidget->sizePolicy().hasHeightForWidth());
        listWidget->setSizePolicy(sizePolicy1);
        listWidget->setMinimumSize(QSize(150, 0));

        horizontalLayout_3->addWidget(listWidget);

        stackedWidget = new QStackedWidget(tab_2);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(stackedWidget->sizePolicy().hasHeightForWidth());
        stackedWidget->setSizePolicy(sizePolicy2);
        stackedWidget->setMinimumSize(QSize(370, 0));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        stackedWidget->addWidget(page_2);

        horizontalLayout_3->addWidget(stackedWidget);

        webEngineView = new QWebEngineView(tab_2);
        webEngineView->setObjectName(QString::fromUtf8("webEngineView"));
        webEngineView->setUrl(QUrl(QString::fromUtf8("about:blank")));

        horizontalLayout_3->addWidget(webEngineView);

        tabWidget->addTab(tab_2, QString());

        horizontalLayout->addWidget(tabWidget);

        checkClass->setCentralWidget(centralWidget);

        retranslateUi(checkClass);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(checkClass);
    } // setupUi

    void retranslateUi(QMainWindow *checkClass)
    {
        checkClass->setWindowTitle(QApplication::translate("checkClass", "\346\260\264\346\240\267\347\233\221\346\265\213\346\230\276\347\244\272\347\263\273\347\273\237", nullptr));
        pushButton->setText(QApplication::translate("checkClass", "\350\277\236\346\216\245", nullptr));
        label->setText(QString());
        pushButton_2->setText(QApplication::translate("checkClass", "\346\226\255\345\274\200", nullptr));
        pushButton_3->setText(QApplication::translate("checkClass", "\350\275\275\345\205\245\346\243\200\346\265\213\347\202\271", nullptr));
        pushButton_4->setText(QApplication::translate("checkClass", "\344\277\235\345\255\230", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("checkClass", "\346\243\200\346\265\213", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("checkClass", "\345\216\206\345\217\262\350\256\260\345\275\225", nullptr));
    } // retranslateUi

};

namespace Ui {
    class checkClass: public Ui_checkClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHECK_H
