#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include <QWidget>
#include "widget.h"
#include "ui_widget.h"

void add_a_number(int number,int* kernel_number,QLineEdit* show);
void math_do(int doing,int* doing_num,int* kernel_number,int* kernel_number2,QLineEdit* show,QLabel* state);

#endif // FUNCTIONS_H
