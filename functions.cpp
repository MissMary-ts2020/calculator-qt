#include "functions.h"
using namespace Ui;

void add_a_number(int number,int* kernel_number,QLineEdit* show){
    *kernel_number*=10;
    *kernel_number+=number;
    QString num_show=QString::number(*kernel_number);
    show->setText(num_show);


}
void math_do(int doing,int* doing_num,int* kernel_num,int* kernel_num2,QLineEdit* show,QLabel* state){
    //press the 5 buttons

    switch(*doing_num){
    case 0:
        //the first number
        *kernel_num2=*kernel_num;


        break;
    case 1:
        *kernel_num2+=*kernel_num;
        break;
    case 2:
        *kernel_num2-=*kernel_num;
        break;
    case 3:
        *kernel_num2*=*kernel_num;
        break;
    case 4:
        *kernel_num2/=*kernel_num;
        break;
    }
    //show result
    *kernel_num=0;
    show->setText(QString::number(*kernel_num2));


    //set doing_num and show it
    QString states_forshowing[5][2]{
        " ",  "+","-","x","/"
    };
    state->setText(*((const QString*)states_forshowing+doing));
    *doing_num=doing;


}
