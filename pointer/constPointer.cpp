//
// Created by Niniane on 2023/4/19.
//
#include <iostream>
#include <stdio.h>

//宏常量的命名一般用大写  常量指针是一个指针，只不过它指向的对象是一个不可以通过解引用修改的常量
using namespace std;


void readValue(const int *a, const int *b);

int main() {
    int a = 100;
    int b = 23;
    const int *pa = &a;
    cout << "a value is " << *pa << endl;
    //    read-only variable is not assignable;
    //    *pa = 2343;
    readValue(&a, &b);


}

//当指针作为函数的参数的时候，通过指针可以直接作用到实参 我们称这种参数传递的方式为地址传递
//其他情况为值传递，即形参拷贝实参，在代码中修改形参不影像实参；
void readValue(const int *a, const int *b) {
    cout << "a value:" << *a << endl;
    cout << "b value:" << *b << endl;

    //常量指针指向的对象是可变的 即指针指向的内存地址可变，但是这种变化毫无意义；
    int c = 123;
    a = &c;
    cout << "c的值为" << *a << endl;


}