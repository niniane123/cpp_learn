//
// Created by Niniane on 2023/4/24.
//
#include <iostream>

//宏常量的命名一般用大写

using namespace std;

int main() {
    int *p = 0;

//    空指针解引用会导致程序执行异常 从而失败
    cout << "对空指针解引用的值为：" << *p << endl;

//    回收空指针不会失败
    delete p;
    cout<<"===============";
}