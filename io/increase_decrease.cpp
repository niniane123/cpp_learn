//
// Created by Niniane on 2023/4/7.
//

using namespace std;

#include <iostream>

int main() {
    int i = 10;
    // 10  先执行变量 几先进行
    cout << i++ << endl;
    //  12 自增，然后执行表达式的值
    cout << ++i << endl;
}