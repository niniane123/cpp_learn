//
// Created by Niniane on 2023/4/24.
//
#include <iostream>

//宏常量的命名一般用大写

using namespace std;

int main() {
    int *p = new int(3);
    cout << " p= " << p << " *p= " << *p << endl;

    {
        //        二级指针存指针的地址
        int **pp = &p;
        //        二级指针解引用就是p p本身就是一个指针
        //将指针p指向内存那块儿的值改成1000
        *pp = new int(100);
        cout << "p的地址为：" << p << " p的值为=" << *p << endl;
    }


}