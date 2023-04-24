//
// Created by Niniane on 2023/4/19.
//
#include <iostream>

using namespace std;


void readValue(const int *a, const int *b);

int main() {

    //    分配内存空间
    int *p = new int(10);

    cout << "指针p的值为：" << *p << endl;
    *p = 200;
    cout << "指针p的值为：" << *p << endl;

    //    回收内存空间
    delete p;

}