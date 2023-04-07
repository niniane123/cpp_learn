#include <iostream>

//宏常量的命名一般用大写
#define  MONTHS 12
#define  PI 3.14
using namespace std;

int main() {
    const int days = 7;    // 常量不允许改变值，否则会报错
//    MONTHS = 1223;

    cout << "一年有" << MONTHS << "个月" << endl;
    cout << "圆周率的值" << PI << endl;
    cout << "days" << days << endl;


}