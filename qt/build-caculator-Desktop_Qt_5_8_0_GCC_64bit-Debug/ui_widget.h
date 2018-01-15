/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QLineEdit *lineEdit;
    QPushButton *pushButtonSlgnPlus;
    QPushButton *pushButtonSlgnSubtraction;
    QPushButton *pushButtonSlgnProduct;
    QPushButton *pushButtonSlgnDivision;
    QPushButton *pushButtonNum7;
    QPushButton *pushButtonNum4;
    QPushButton *pushButtonNum1;
    QPushButton *pushButtonNum8;
    QPushButton *pushButtonNum2;
    QPushButton *pushButtonNum5;
    QPushButton *pushButtonNum9;
    QPushButton *pushButtonNum6;
    QPushButton *pushButtonNum3;
    QPushButton *pushButtonDecimal;
    QPushButton *pushButtonNum0;
    QPushButton *pushButtonSlgnEqual;
    QPushButton *pushButtonClean;
    QPushButton *pushButtonBackSpace;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(299, 349);
        lineEdit = new QLineEdit(Widget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(0, 0, 251, 201));
        pushButtonSlgnPlus = new QPushButton(Widget);
        pushButtonSlgnPlus->setObjectName(QStringLiteral("pushButtonSlgnPlus"));
        pushButtonSlgnPlus->setGeometry(QRect(200, 200, 51, 51));
        pushButtonSlgnSubtraction = new QPushButton(Widget);
        pushButtonSlgnSubtraction->setObjectName(QStringLiteral("pushButtonSlgnSubtraction"));
        pushButtonSlgnSubtraction->setGeometry(QRect(250, 200, 51, 51));
        pushButtonSlgnProduct = new QPushButton(Widget);
        pushButtonSlgnProduct->setObjectName(QStringLiteral("pushButtonSlgnProduct"));
        pushButtonSlgnProduct->setGeometry(QRect(200, 250, 51, 51));
        pushButtonSlgnDivision = new QPushButton(Widget);
        pushButtonSlgnDivision->setObjectName(QStringLiteral("pushButtonSlgnDivision"));
        pushButtonSlgnDivision->setGeometry(QRect(250, 250, 51, 51));
        pushButtonNum7 = new QPushButton(Widget);
        pushButtonNum7->setObjectName(QStringLiteral("pushButtonNum7"));
        pushButtonNum7->setGeometry(QRect(0, 200, 51, 51));
        pushButtonNum4 = new QPushButton(Widget);
        pushButtonNum4->setObjectName(QStringLiteral("pushButtonNum4"));
        pushButtonNum4->setGeometry(QRect(0, 250, 51, 51));
        pushButtonNum1 = new QPushButton(Widget);
        pushButtonNum1->setObjectName(QStringLiteral("pushButtonNum1"));
        pushButtonNum1->setGeometry(QRect(0, 300, 51, 51));
        pushButtonNum8 = new QPushButton(Widget);
        pushButtonNum8->setObjectName(QStringLiteral("pushButtonNum8"));
        pushButtonNum8->setGeometry(QRect(50, 200, 51, 51));
        pushButtonNum2 = new QPushButton(Widget);
        pushButtonNum2->setObjectName(QStringLiteral("pushButtonNum2"));
        pushButtonNum2->setGeometry(QRect(50, 300, 51, 51));
        pushButtonNum5 = new QPushButton(Widget);
        pushButtonNum5->setObjectName(QStringLiteral("pushButtonNum5"));
        pushButtonNum5->setGeometry(QRect(50, 250, 51, 51));
        pushButtonNum9 = new QPushButton(Widget);
        pushButtonNum9->setObjectName(QStringLiteral("pushButtonNum9"));
        pushButtonNum9->setGeometry(QRect(100, 200, 51, 51));
        pushButtonNum6 = new QPushButton(Widget);
        pushButtonNum6->setObjectName(QStringLiteral("pushButtonNum6"));
        pushButtonNum6->setGeometry(QRect(100, 250, 51, 51));
        pushButtonNum3 = new QPushButton(Widget);
        pushButtonNum3->setObjectName(QStringLiteral("pushButtonNum3"));
        pushButtonNum3->setGeometry(QRect(100, 300, 51, 51));
        pushButtonDecimal = new QPushButton(Widget);
        pushButtonDecimal->setObjectName(QStringLiteral("pushButtonDecimal"));
        pushButtonDecimal->setGeometry(QRect(150, 300, 51, 51));
        pushButtonNum0 = new QPushButton(Widget);
        pushButtonNum0->setObjectName(QStringLiteral("pushButtonNum0"));
        pushButtonNum0->setGeometry(QRect(150, 200, 51, 101));
        pushButtonSlgnEqual = new QPushButton(Widget);
        pushButtonSlgnEqual->setObjectName(QStringLiteral("pushButtonSlgnEqual"));
        pushButtonSlgnEqual->setGeometry(QRect(200, 300, 101, 51));
        pushButtonClean = new QPushButton(Widget);
        pushButtonClean->setObjectName(QStringLiteral("pushButtonClean"));
        pushButtonClean->setGeometry(QRect(250, 0, 51, 101));
        pushButtonBackSpace = new QPushButton(Widget);
        pushButtonBackSpace->setObjectName(QStringLiteral("pushButtonBackSpace"));
        pushButtonBackSpace->setGeometry(QRect(250, 100, 51, 101));
        pushButtonBackSpace->setContextMenuPolicy(Qt::PreventContextMenu);
        QIcon icon;
        icon.addFile(QStringLiteral(":/new/prefix1/img/arrow_back_outline_48px_1158503_easyicon.net.ico"), QSize(), QIcon::Normal, QIcon::On);
        pushButtonBackSpace->setIcon(icon);
        pushButtonNum3->raise();
        lineEdit->raise();
        pushButtonSlgnPlus->raise();
        pushButtonSlgnSubtraction->raise();
        pushButtonSlgnProduct->raise();
        pushButtonSlgnDivision->raise();
        pushButtonNum7->raise();
        pushButtonNum4->raise();
        pushButtonNum1->raise();
        pushButtonNum8->raise();
        pushButtonNum2->raise();
        pushButtonNum5->raise();
        pushButtonNum9->raise();
        pushButtonNum6->raise();
        pushButtonDecimal->raise();
        pushButtonNum0->raise();
        pushButtonSlgnEqual->raise();
        pushButtonClean->raise();
        pushButtonBackSpace->raise();

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", Q_NULLPTR));
        pushButtonSlgnPlus->setText(QApplication::translate("Widget", "+", Q_NULLPTR));
        pushButtonSlgnSubtraction->setText(QApplication::translate("Widget", "-", Q_NULLPTR));
        pushButtonSlgnProduct->setText(QApplication::translate("Widget", "*", Q_NULLPTR));
        pushButtonSlgnDivision->setText(QApplication::translate("Widget", "/", Q_NULLPTR));
        pushButtonNum7->setText(QApplication::translate("Widget", "7", Q_NULLPTR));
        pushButtonNum4->setText(QApplication::translate("Widget", "4", Q_NULLPTR));
        pushButtonNum1->setText(QApplication::translate("Widget", "1", Q_NULLPTR));
        pushButtonNum8->setText(QApplication::translate("Widget", "8", Q_NULLPTR));
        pushButtonNum2->setText(QApplication::translate("Widget", "2", Q_NULLPTR));
        pushButtonNum5->setText(QApplication::translate("Widget", "5", Q_NULLPTR));
        pushButtonNum9->setText(QApplication::translate("Widget", "9", Q_NULLPTR));
        pushButtonNum6->setText(QApplication::translate("Widget", "6", Q_NULLPTR));
        pushButtonNum3->setText(QApplication::translate("Widget", "3", Q_NULLPTR));
        pushButtonDecimal->setText(QApplication::translate("Widget", ".", Q_NULLPTR));
        pushButtonNum0->setText(QApplication::translate("Widget", "0", Q_NULLPTR));
        pushButtonSlgnEqual->setText(QApplication::translate("Widget", "=", Q_NULLPTR));
        pushButtonClean->setText(QApplication::translate("Widget", "C", Q_NULLPTR));
        pushButtonBackSpace->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
