//
// Created by Niniane on 2023/4/24.
//
#include <iostream>

//宏常量的命名一般用大写

using namespace std;

int main() {
    int *p = new int(3);
    cout << "p的所指向的内存地址为：" << p << "p解引用得到的值为：" << *p << endl;


    {
        //        二级指针存指针的地址
        int **pp = &p;
        //        二级指针解引用就是p p本身就是一个指针 二级指针解引用就是二级指针所指向的一级指针   一级指针解引用就是变量的值
        //将指针p指向内存那块儿的值改成1000
        *pp = new int(100);
        cout << "p的所指向的内存地址为：" << p << "p解引用得到的值为：" << *p << endl;
    }
}