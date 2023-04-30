//
// Created by Niniane on 2023/4/30.
//
#include <iostream>

using namespace std;

int main() {
    int array[] = {1, 2, 3, 4, 5, 5, 4};

    // 使用指针用存放数组首地址
    int *p = array;

    int length = sizeof(array) / sizeof(int);
    for (int i = 0; i < length; ++i) {

        // 使用数组首地址+下标访问元素
        cout << *(array + i) << endl;
        //使用地址[下标]访问元素 地址[下标]解释为*（地址+下标）
        cout << p[i] << endl;

    }

}