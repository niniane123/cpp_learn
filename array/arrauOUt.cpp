
#include <iostream>

using namespace std;

int main() {
    int array[] = {1, 2, 3, 4, 5, 5, 4};
    int *p = array;
    int num = sizeof(array) / sizeof(int);
    cout << "num is " << num << endl;

//    模拟对数组的写入越界
//    for (int i = 0; i < 900; ++i) {
//        array[i] = i;
//        cout << array[i] << endl;
//        cout << *(p + i) << endl;
//        cout << "==============" << endl;
//    }

//    数组越界导致的野指针；
    int testArray[] = {1, 2, 3, 4, 5, 6};
    for (int i = -3; i < 4; ++i) {
        cout << &testArray[i] << endl;
    }

}




