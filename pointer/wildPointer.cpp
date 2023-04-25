//
// Created by Niniane on 2023/4/24.
//
#include <iostream>

//宏常量的命名一般用大写

using namespace std;

int *test() {
    int a = 100;
    cout << "指针a的地址为：" << &a << endl;
    return &a;
}

int main() {
//    1.指针指向了动态分配的内存，内存呗释放之后，指针不会置空，但是指向的内存地址已经失效
    int *p = new int(10);
    cout << p << "   " << *p << endl;
    delete p;
    //出现野指针
    cout << p << "   " << *p << endl;


//    2.指针指向的变量已经超越了变量的作用域（变量的内存空间已经被系统回收）
    int *ptest = test();
    cout << "ptest指向的内存地址为：" << ptest << " ptest解引用得到的值为：  " << *ptest << endl;

//    3.指针未初始化 也不赋值未nullptr;

    int *nullpointer;

}