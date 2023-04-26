//
// Created by Niniane on 2023/4/26.
//本例中的代码利用函数指针实现模板方法设计模式
//

#include <iostream>
#include <stdio.h>

//宏常量的命名一般用大写  常量指针是一个指针，只不过它指向的对象是一个不可以通过解引用修改的常量
using namespace std;


//生命函数原型
void showMessage(int id, string message, void (*funcPointer)(int, string));

void executionA(int bh, string str);

void executionB(int no, string message);


//上述三个函数的指针类型为

int (*functionPointer)(int, string);

int main() {
    int id = 10;
    string message = "this is a message";
    showMessage(id, message, executionA);

}

void showMessage(int id, string message, void (*funcPointer)(int, string)) {
    funcPointer(id, message);
}


void executionA(int bh, string str) {
    cout << "bh is " << bh << " message is :" << str << endl;
}

void executionB(int no, string message) {
    cout << "no is " << no << " message is :" << message << endl;
}