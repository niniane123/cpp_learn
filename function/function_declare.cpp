#include <iostream>

using namespace std;

//函数声明 函数的声明可以多次重复，但是函数的定义只能重复一次
//在实际的开发中，函数的声明和函数的一般要分开，而不是放在一起；


int max(int a, int b);

int main() {
    int test = max(12, 23);
    cout << "max is :" << test << endl;
}

//函数定义
int max(int a, int b) {
    if (a > b) return a;
    return b;
}