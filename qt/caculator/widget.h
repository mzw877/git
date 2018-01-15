#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QString>
#include <QPushButton>

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();
    void setLineEditString(QPushButton *button);

private slots:
    void on_pushButtonClean_clicked();

    void on_pushButtonBackSpace_clicked();

    void on_pushButtonNum1_clicked();

    void on_pushButtonNum2_clicked();

    void on_pushButtonNum3_clicked();

    void on_pushButtonNum4_clicked();

    void on_pushButtonNum5_clicked();

    void on_pushButtonNum6_clicked();

    void on_pushButtonNum7_clicked();

    void on_pushButtonNum8_clicked();

    void on_pushButtonNum9_clicked();

    void on_pushButtonNum0_clicked();

    void on_pushButtonDecimal_clicked();

    void on_pushButtonSlgnPlus_clicked();

    void on_pushButtonSlgnSubtraction_clicked();

    void on_pushButtonSlgnProduct_clicked();

    void on_pushButtonSlgnDivision_clicked();

    void on_pushButtonSlgnEqual_clicked();

private:
    Ui::Widget *ui;
    QString str;
};

#endif // WIDGET_H
