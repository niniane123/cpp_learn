
#include <iostream>
#include <stdio.h>

using namespace std;

int main() {
    //   数组定义
    int array[] = {1, 2, 3, 4, 5, 6};
    int *parr = array;
    //1.    c++将数组名字定义为数组中第一个元素的地址
    cout << array << endl;
    cout << &array[0] << endl;

    // 2.c++内部用指针处理数组

    //1.c++编译器把数组名[下标]解释为*（数组首地址+下标）
    cout << "===============" << endl;
    cout << array[1] << endl;
    cout << *(array + 1) << endl;
    //  2.c++把数组名[下标]解释为*（数组首地址+下标）
    //  0x9c57dffac4
    cout << &array[1] << endl;
    // 0x9c57dffac4
    cout << array + 1 << endl;

//    3.c++百编译器把地址[下标]解释为*(地址下标)
    cout << parr[0] << endl;
    cout << *(parr + 0) << endl;

}




