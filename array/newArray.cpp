//
// 演示一个奇怪的bug
//
#include <iostream>
#include <stdio.h>

using namespace std;

int main() {
//    动态开辟内存创建的数组没数组名，只能通过指针访问
    int *p = new int[4];
    for (int i = 0; i < 4; ++i) {
//        数组表示法；
        p[i] = i;
//        指针表示法
        cout << *(p + i) << endl;
    }
//    释放数组
    delete[]p;
}