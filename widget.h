#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui {
class Widget;
}
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();
    int kernel_number;
    int kernel_number2;
    int doing_num;

private slots:
    void on_b_1_clicked();
    void on_b_2_clicked();
    void on_b_3_clicked();
    void on_b_4_clicked();
    void on_b_5_clicked();
    void on_b_6_clicked();
    void on_b_7_clicked();
    void on_b_8_clicked();
    void on_b_9_clicked();
    void on_b_0_clicked();
    void on_b_clear_clicked();

    void on_b_add_clicked();

    void on_b_min_clicked();
    void on_b_times_clicked();
    void on_b_div_clicked();
    void on_b_eq_clicked();

private:
    Ui::Widget *ui;
};
#endif // WIDGET_H
