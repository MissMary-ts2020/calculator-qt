#include "widget.h"
#include "functions.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    ,kernel_number(0),kernel_number2(0),doing_num(0)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_b_1_clicked()
{
    add_a_number(1,&kernel_number,ui->L_show);

}
void Widget::on_b_2_clicked()
{
    add_a_number(2,&kernel_number,ui->L_show);

}
void Widget::on_b_3_clicked()
{
    add_a_number(3,&kernel_number,ui->L_show);

}
void Widget::on_b_4_clicked()
{
    add_a_number(4,&kernel_number,ui->L_show);

}
void Widget::on_b_5_clicked()
{
    add_a_number(5,&kernel_number,ui->L_show);

}
void Widget::on_b_6_clicked()
{
    add_a_number(6,&kernel_number,ui->L_show);

}
void Widget::on_b_7_clicked()
{
    add_a_number(7,&kernel_number,ui->L_show);

}
void Widget::on_b_8_clicked()
{
    add_a_number(8,&kernel_number,ui->L_show);

}
void Widget::on_b_9_clicked()
{
    add_a_number(9,&kernel_number,ui->L_show);

}
void Widget::on_b_0_clicked()
{
    add_a_number(0,&kernel_number,ui->L_show);

}


void Widget::on_b_clear_clicked()
{
    this->kernel_number=0;
    this->kernel_number2=0;
    this->doing_num=0;
    ui->L_show->setText("0");
    ui->state_label->setText(" ");

}


void Widget::on_b_add_clicked()
{
    math_do(1,&doing_num,&kernel_number,&kernel_number2,ui->L_show,ui->state_label);

}



void Widget::on_b_min_clicked()
{
    math_do(2,&doing_num,&kernel_number,&kernel_number2,ui->L_show,ui->state_label);
}
void Widget::on_b_times_clicked()
{
    math_do(3,&doing_num,&kernel_number,&kernel_number2,ui->L_show,ui->state_label);
}
void Widget::on_b_div_clicked()
{
    math_do(4,&doing_num,&kernel_number,&kernel_number2,ui->L_show,ui->state_label);
}
void Widget::on_b_eq_clicked()
{
    math_do(0,&doing_num,&kernel_number,&kernel_number2,ui->L_show,ui->state_label);
}
