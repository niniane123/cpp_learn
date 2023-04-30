//
// 演示一个奇怪的bug
//
#include <iostream>

using namespace std;

//array变量其实是一个指针
void test(int array[]) {
    int length = sizeof(array) / sizeof(int);
    for (int i = 0; i < length; ++i) {
        cout << array[i] << " ";
    }
    cout << endl;
}

int main() {
    int array[] = {1, 2, 3, 4, 5, 5, 4};
    int length = sizeof(array) / sizeof(int);

    for (int i = 0; i < length; ++i) {
        cout << array[i] << " ";
    }
    cout << endl;

    test(array);
//    在main函数中输出的长度和在test函数中输出的长度不一致：原因在于在main函数中array是数组名字，对数组名字进行sizeof运算不会将其解释为指针
//     其返回的是整个数组array占用内存空间的大小
// 在test中 array为指针 对指针进行 所占用内存空间大小的sizeof运算 返回的永远是8   所以把数组传递给函数，必须传入数组的长度；

}