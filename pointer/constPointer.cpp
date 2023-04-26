//
// Created by Niniane on 2023/4/25.
//

//
// Created by Niniane on 2023/4/19.
//
#include <iostream>
#include <stdio.h>

using namespace std;


//生命函数原型
int fun1(int bh, string str);

int fun2(int no, string message);

int fun3(int id, string info);

//上述三个函数的指针类型为
//zhi真functionPointer指向 返回值为int 形参列表类型为int string类型的函数

int (*functionPointer)(int, string);

int main() {
    int id = 12;
    string info = "this is information";
    fun3(id, info);

//  生命fun3的指针
    int ( *funcPointer)(int, string);

//    将指针指向func3 函数指针名=函数名
    funcPointer = fun3;

//    c++语法：用函数指针名调用函数
    funcPointer(id, info);

//    c语语法：用函数指针名叫用函数
    (*funcPointer)(id, info);

}


int fun3(int id, string info) {
    cout << "id is: " << id << " info is :" << info << endl;
}

