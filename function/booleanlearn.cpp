//
// Created by Niniane on 2023/4/9.
//
using namespace std;

#include <iostream>

int main() {
    bool a = 100, b = false, c = "s", d = "fdjkfa";
    //1
    cout << a << endl;
    cout << c << endl;

    cout << d << endl;
    // 布尔类型的大小
    //sizeof(bool)1
    cout << "sizeof(bool)" << sizeof(b) << endl;
    cout << "请输入a:" << endl;
    // 输入的a只能是数字类型
    cin >> a;

    cout << "a is " << a << endl;

    //显示的时候把整数显示为对应的符号，也可以直接显示整数
    char mychar = 85;
    char mychar2 = 's';
    cout << mychar << endl;
    cout << sizeof(mychar) << endl;
    cout << mychar2 << endl;
}