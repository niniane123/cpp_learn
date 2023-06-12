//
// Created by Niniane on 2023/5/9.
//
#pragma pack(1);
using namespace std;

#include <iostream>


//结构体的作用：减少形参传递数量
struct student {
    //如果希望在结构体中使用 C 语言风格的字符串，可以将其定义为字符数组，并使用 strcpy() 函数进行赋值操作
    //字符数组不支持直接赋值操作
    //char name[20] = {"zhansan"};
    int age;
    int grade;
};

int main() {
    struct student zhangsan;
    struct student lisi = {12, 8};
    cout << zhangsan.grade << endl;
    cout << lisi.age <<" "<< lisi.grade << endl;
}