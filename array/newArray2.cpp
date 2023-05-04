//
// 演示一个奇怪的bug
//
#include <iostream>

using namespace std;

int main() {
    //new后面添加(std::nothrow)，数组内存分配失败 程序正常运行
    int *a = new(std::nothrow) int[10000];
    if (a == nullptr) {
        cout << "分配内存失败" << endl;
    } else {
        a[1000] = 20;

        delete[]a;
    }
}