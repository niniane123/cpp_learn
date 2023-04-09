//
// Created by Niniane on 2023/4/9.
//
using namespace std;

#include <iostream>

int main() {
    string name = "";
    cout << "请输入名字" << endl;
    cin >> name;
    //字符串的比较
    if (name == "zrc") cout << "输入的名字为zrc" << endl;
    if (name == "zhangsan") cout << "我不喜欢zrc" << endl;
    //字符串的拼接
    name = "this is a test " + name + "这是一个拼接字符串";
    cout << "name is " << name;

    //如果拼接的字符串每一个都是常量 那么不能使用加号拼接，而是应该使用空格拼接
//    name2 = "this ia a str" + "this is a stre" + "this is a str3";
    string name2 = "this ia a str"  "this is a stre"  "this is a str3";

    return 1;
}