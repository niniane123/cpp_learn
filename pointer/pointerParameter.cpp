//
// Created by Niniane on 2023/4/19.
//
#include <iostream>
#include <stdio.h>

//宏常量的命名一般用大写
int max;
int min;
using namespace std;

void calculate(int a, int b, int c, int *max, int *min);

int main() {

    int a = 100;
    int b = 23;
    int c = -1;
    int max = 0;
    int min = 0;
    calculate(a, b, c, &max, &min);
    cout << "max is:" << max << endl;
    cout << "max is:" << min << endl;

}

//当指针作为函数的参数的时候，通过指针可以直接作用到实参 我们称这种参数传递的方式为地址传递
//其他情况为值传递，即形参拷贝实参，在代码中修改形参不影像实参；
void calculate(int a, int b, int c, int *max, int *min) {
    *max = a > b ? a : b;
    *max = *max > c ? *max : c;
    *min = a < b ? a : b;
    *min = *min < c ? *min : c;


}