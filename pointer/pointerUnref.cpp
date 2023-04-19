#include <iostream>

//宏常量的命名一般用大写

using namespace std;

int main() {
    int a = 10;
//    b存放的是内存地址 变量a再内存中的起始地址 我们要获取变量啊的值必须要通过解引用的方式来来做
    int *b = &a;
    cout << "对a解引用的值为" << *b << endl;

    // 修改指针指向的变量值
    *b = 12;
    cout << "修改a的值为" << *b << endl;


    a = 200;
    cout << "a的值为：" << a << endl;
    cout << "对b解引用的值为：" << *b << endl;

}