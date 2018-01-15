#include "widget.h"
#include "ui_widget.h"
#include <QPushButton>
#include <QByteArray>
#include <QStack>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::setLineEditString(QPushButton *button)
{
    QString s = button->text();
    this->str.append(s);
    ui->lineEdit->setText(this->str);
}

void Widget::on_pushButtonClean_clicked()
{
    this->str.clear();
    ui->lineEdit->setText(this->str);
}

void Widget::on_pushButtonBackSpace_clicked()
{
    this->str = this->str.left(str.length()-1);
    ui->lineEdit->setText(this->str);
}

void Widget::on_pushButtonNum1_clicked()
{
    this->setLineEditString(ui->pushButtonNum1);
}

void Widget::on_pushButtonNum2_clicked()
{
    this->setLineEditString(ui->pushButtonNum2);
}

void Widget::on_pushButtonNum3_clicked()
{
    this->setLineEditString(ui->pushButtonNum3);
}

void Widget::on_pushButtonNum4_clicked()
{
    this->setLineEditString(ui->pushButtonNum4);
}

void Widget::on_pushButtonNum5_clicked()
{
    this->setLineEditString(ui->pushButtonNum5);
}

void Widget::on_pushButtonNum6_clicked()
{
    this->setLineEditString(ui->pushButtonNum6);
}

void Widget::on_pushButtonNum7_clicked()
{
    this->setLineEditString(ui->pushButtonNum7);
}

void Widget::on_pushButtonNum8_clicked()
{
    this->setLineEditString(ui->pushButtonNum8);
}

void Widget::on_pushButtonNum9_clicked()
{
    this->setLineEditString(ui->pushButtonNum9);
}

void Widget::on_pushButtonNum0_clicked()
{
    this->setLineEditString(ui->pushButtonNum0);
}

void Widget::on_pushButtonDecimal_clicked()
{
    this->setLineEditString(ui->pushButtonDecimal);
}

void Widget::on_pushButtonSlgnPlus_clicked()
{
    this->setLineEditString(ui->pushButtonSlgnPlus);
}

void Widget::on_pushButtonSlgnSubtraction_clicked()
{
    this->setLineEditString(ui->pushButtonSlgnSubtraction);
}

void Widget::on_pushButtonSlgnProduct_clicked()
{
    this->setLineEditString(ui->pushButtonSlgnProduct);
}

void Widget::on_pushButtonSlgnDivision_clicked()
{
    this->setLineEditString(ui->pushButtonSlgnDivision);
}

void Widget::on_pushButtonSlgnEqual_clicked()
{
    this->setLineEditString(ui->pushButtonSlgnEqual);
}
