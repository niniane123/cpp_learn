#include <iostream>

//宏常量的命名一般用大写
#define  MONTHS 12
#define  PI 3.14
using namespace std;

int main() {
    int a;
    char b;
    bool c;
    string d;
    cout << "a的地址是" << &a << endl;
    cout << "b的地址是" << &b << endl;
    cout << "c的地址是" << &c << endl;
    cout << "d的地址是" << &d << endl;

    cout << "=========================" << endl;
    cout << "a的地址是" << (void *) &a << endl;
    cout << "b的地址是" << (void *) &b << endl;
    cout << "c的地址是" << (void *) &c << endl;
    cout << "d的地址是" << (void *) &d << endl;

//    将地址转为整数 int的显示范围太小了 所以我们使用long long类型的整数
    cout << "=========================" << endl;
    cout << "a的地址是" << (long long) &a << endl;
    cout << "b的地址是" << (long long) &b << endl;
    cout << "c的地址是" << (long long) &c << endl;
    cout << "d的地址是" << (long long) &d << endl;

//    指针变量 语法：变量类型 *变量名
    int *pa = &a;
    char *pb = &b;
    bool *pc = &c;
    string *pd = &d;
    cout << "=========================" << endl;
    cout << "a的地址是" << (long long) pa << endl;
    cout << "b的地址是" << (long long) pb << endl;
    cout << "c的地址是" << (long long) pc << endl;
    cout << "d的地址是" << (long long) pd << endl;

//    指针占用的内存
    cout << sizeof(pa) << endl;
    cout << sizeof(&a) << endl;

}