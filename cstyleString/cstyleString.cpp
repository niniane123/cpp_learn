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
    char name2[32] = "hllo wolrd";
    //    最常用的初始化方法，赋0
    char name3[323] = {0};
    for (int i = 0; i < sizeof(name); ++i) {
        //注意：这里必须要转换成为int才能显示出字符的值，因为有的字符是不显示的；
        cout << (int) name[i] << endl;
    }
}