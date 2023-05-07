
#include <iostream>
#include <string.h>
//#include <cstring>
using namespace std;


int main() {

    //声明字符数组 并未做初始化 里面存放的是垃圾值；禁止使用这种方式；
    char name[111];
    for (int i = 0; i < sizeof(name); ++i) {
        cout << (int) name[i] << endl;
    }
    cout << "=================" << endl;
    //使用memset()函数去清空字符串，赋值为0
    memset(name, 0, sizeof(name));
    for (int i = 0; i < sizeof(name); ++i) {
        cout << (int) name[i] << endl;
    }
    cout << name << endl;

}