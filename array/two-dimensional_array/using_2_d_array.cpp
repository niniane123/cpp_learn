//
// 演示一个奇怪的bug
//
#include <iostream>
#include <stdio.h>

using namespace std;

int main() {
    //动态开辟内存创建的数组没数组名，只能通过指针访问
    int *p = new int[4]{1, 23, 4, 4};
    cout << p << endl;
    cout << p[0] << endl;
}