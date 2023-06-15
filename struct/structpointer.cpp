//
// Created by Niniane on 2023/5/9.
//


#pragma pack(1);

#include <stdio.h>
#include <iostream>
#include <cstring>

using namespace std;


//结构体的作用：减少形参传递数量
struct student {
    string name;
    int age;
    int grade;
};

void function(const student *point, string message) {
    cout << "this is message:" << message << endl;
    //    使用箭头运算符解引用
    cout << point->name << point->age << point->grade << endl;

//    point->name = "aiqiyi"; 添加了const约束不能修改指针指向变量的值
    cout << point->name << point->age << point->grade << endl;
    cout << "=================================" << endl;

};

int main() {
    //结构体指针用于动态分配内存；
    student *wangwu = new student;

//    为结构体分配内存最常见的操作是清空
    student *zhaoliu = new student({});
    function(zhaoliu, "zhaoliu");
    memset(wangwu, 0, sizeof(student));
    function(wangwu, "wangwu");
    struct student zhangsan = {"zhangsan", 12, 9};
    cout << zhangsan.name << zhangsan.age << zhangsan.grade << endl;

//    结构体指针
    student *point = &zhangsan;
//    指针解引用访问结构体中的元素；
    cout << (*point).name << (*point).age << (*point).grade << endl;

//    使用箭头运算符解引用
//    cout << point->name << point->age << point->grade << endl;
    function(point, "zhangsan");

}