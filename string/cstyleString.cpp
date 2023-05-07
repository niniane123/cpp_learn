//
//c语言风格的字符串
//

//
// Created by Niniane on 2023/4/19.
//
#include <iostream>

using namespace std;


int main() {

    //声明字符数组 并未做初始化 里面存放的是垃圾值；
    char name[11];
//    声明字符数组，并且做了初始化，编译器会自动补0表示字符串的结尾
    char namello wolrd";
    for (int i = 0; i < sizeof(name) / sizeof(char); ++i) {
        cout << name[i] << endl;
    }
    cout << name << endl;

}