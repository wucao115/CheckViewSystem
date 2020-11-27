/********************************************************************************
** Form generated from reading UI file 'mychart.ui'
**
** Created by: Qt User Interface Compiler version 5.12.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYCHART_H
#define UI_MYCHART_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_mychart
{
public:
    QHBoxLayout *horizontalLayout_2;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QTableView *tableView;
    QLabel *label_2;
    QPushButton *pushButton;
    QWidget *widget_2;
    QVBoxLayout *verticalLayout_2;
    QSpacerItem *verticalSpacer_2;
    QLabel *label_3;
    QLineEdit *lineEdit;
    QSpacerItem *verticalSpacer_3;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QSpacerItem *verticalSpacer;

    void setupUi(QDialog *mychart)
    {
        if (mychart->objectName().isEmpty())
            mychart->setObjectName(QString::fromUtf8("mychart"));
        mychart->setWindowModality(Qt::ApplicationModal);
        mychart->resize(881, 576);
        QIcon icon;
        icon.addFile(QString::fromUtf8("img/boat_783px_1224913_easyicon.net.png"), QSize(), QIcon::Normal, QIcon::Off);
        mychart->setWindowIcon(icon);
        horizontalLayout_2 = new QHBoxLayout(mychart);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        widget = new QWidget(mychart);
        widget->setObjectName(QString::fromUtf8("widget"));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        tableView = new QTableView(widget);
        tableView->setObjectName(QString::fromUtf8("tableView"));

        verticalLayout->addWidget(tableView);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout->addWidget(label_2);

        pushButton = new QPushButton(widget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("img/close_gray.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon1);

        verticalLayout->addWidget(pushButton);


        horizontalLayout_2->addWidget(widget);

        widget_2 = new QWidget(mychart);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        verticalLayout_2 = new QVBoxLayout(widget_2);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer_2);

        label_3 = new QLabel(widget_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout_2->addWidget(label_3);

        lineEdit = new QLineEdit(widget_2);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lineEdit->sizePolicy().hasHeightForWidth());
        lineEdit->setSizePolicy(sizePolicy);

        verticalLayout_2->addWidget(lineEdit);

        verticalSpacer_3 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer_3);

        widget_3 = new QWidget(widget_2);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        horizontalLayout = new QHBoxLayout(widget_3);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pushButton_2 = new QPushButton(widget_3);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8("img/checked_blue.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon2);

        horizontalLayout->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(widget_3);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8("img/set_gray.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_3->setIcon(icon3);

        horizontalLayout->addWidget(pushButton_3);


        verticalLayout_2->addWidget(widget_3);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);


        horizontalLayout_2->addWidget(widget_2);


        retranslateUi(mychart);

        QMetaObject::connectSlotsByName(mychart);
    } // setupUi

    void retranslateUi(QDialog *mychart)
    {
        mychart->setWindowTitle(QApplication::translate("mychart", "\344\277\235\345\255\230", nullptr));
        label_2->setText(QApplication::translate("mychart", "\345\216\206\345\217\262\346\243\200\346\265\213\350\267\257\347\272\277\346\227\240\346\263\225\346\233\264\346\224\271\357\274\214\n"
"\345\217\257\345\210\240\351\231\244\345\210\232\345\242\236\345\212\240\347\232\204\346\243\200\346\265\213\350\267\257\347\272\277", nullptr));
        pushButton->setText(QApplication::translate("mychart", "\345\210\240\351\231\244\346\243\200\346\265\213\350\267\257\347\272\277", nullptr));
        label_3->setText(QApplication::translate("mychart", "\350\257\267\350\276\223\345\205\245\346\226\260\346\243\200\346\265\213\350\267\257\347\272\277", nullptr));
        pushButton_2->setText(QApplication::translate("mychart", "\345\242\236\345\212\240\346\243\200\346\265\213\350\267\257\347\272\277", nullptr));
        pushButton_3->setText(QApplication::translate("mychart", "\344\277\235\345\255\230\346\225\260\346\215\256\345\272\223", nullptr));
    } // retranslateUi

};

namespace Ui {
    class mychart: public Ui_mychart {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYCHART_H
