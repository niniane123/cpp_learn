//
// Created by Niniane on 2023/4/24.
//
#include <iostream>

//宏常量的命名一般用大写

using namespace std;

int main() {
    int i = 10;
    cout << "i的地址为：" << &i << " i的值为" << i << endl;
    //pi的值为所指向的内存地址
    //通过对指针pi解引用可以获取其指向内存地址的变量值
    //指针本身还占据了内存地址，所以有了指向指针的指针

    int *pi = &i;
    cout << "pi的值为" << pi << " 指针pi的解引用为" << *pi << " pi的地址为" << &pi << endl;

    int **ppi = &pi;
    //ppi的值应该是pi的内存地址
    //解引用，那就是pi的值（因为ppi指向的是pi的内存地址，pi的值是i的内存地址即0x49e8dffcfc)
    cout << "ppi的值为" << ppi << " 指针ppi的解引用为" << *ppi << " ppi的地址为" << &ppi << endl;
}