
#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

int main() {
//需要注意得一点是，就算不对数组初始化，声明数组得时候编译器就已经开辟了数组所声明的内存空间；
//    技巧一：求出数组中的元素  当然这种技巧只对基本数据类型的数组有效；
    int array[] = {1, 2, 3, 4, 5, 5, 4};
    int num = sizeof(array) / sizeof(int);
    cout << "num is " << num << endl;
    for (int i = 0; i < sizeof(array) / sizeof(int); ++i) {
        cout << array[i] << endl;
    }

//清空数组 memset()
//void * memset(void* s,int c ,size_t n)  库函数就是指代编译器提供的函数，我们直接使用即可；

//    memset(array, 0, sizeof(array));
//    for (int i = 0; i < sizeof(array) / sizeof(int); ++i) {
//        cout << array[i] << endl;
//    }

    //复制数组memcpy()函数可以吧数组中的全部元素复制到另外一个相同大小的数组（只适用与c++基本数据类型）
    //    void* memcpy(void *dest,const void* src,size_t)

    int array2[sizeof(array) / sizeof(int)];

    memcpy(array2, array, sizeof(array));
    for (int i = 0; i < sizeof(array) / sizeof(int); ++i) {
        cout << array2[i] << endl;
    }

}




