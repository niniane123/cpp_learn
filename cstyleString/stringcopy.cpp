
#include <iostream>
#include <string.h>

using namespace std;


int main() {
    //char* strcpy(char* dest,char* src) 返
    // 回目标字符串的起始地址即拷贝后的新字符串的首地址 会自动补0
    // 如果目标字符串的内存空间不够大，有可能导致数组越界
    char name[20] = {0};
//    strcpy(name, "zhangsisflasfdjlafjlakfjlas");
    for (int i = 0; i < sizeof name; ++i) {
        cout << (int) name[i] << endl;
    }

    //   strncpy 复制前n个元素之后完成之后并不会追加0  规范:每次使用字符串之前需要做清0 并且需要注意数组越界的问题
    strncpy(name, "zhangsisflasfdjlafjlakfjlas", 12);
    for (int i = 0; i < sizeof name; ++i) {
        cout << name[i] << endl;
    }

}