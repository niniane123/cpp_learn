//
// Created by Niniane on 2023/4/19.
//
#include <iostream>

//宏常量的命名一般用大写  常量指针是一个指针，只不过它指向的对象是一个不可以通过解引用修改的常量
using namespace std;

void test(int *a) {
    cout << "'a value is :" << *a << endl;
}

int main() {
//    void 不能直接用来申明变量 但是void*可以
    int a = 100;
    void *pa = &a;
    // 因为pa始终是一个指针嘛，所以我们可以直接得到pa保存的内存地址，要想取值必须得解引用才能取值；
    cout << "指针pa所指向的内存地址为：" << pa << endl;

    //    不能直接对void*类型的指针解引用，必须做强制类型转换之后解引用
//    cout << "pointer pa value is :" << *pa << endl;


    //    将void *类型的指针赋值给其他类型的指针需要做强制类型转换；
    test((int *) pa);

    //    其他类型的指针赋值给void* 类型的指针不需要做强制类型转换 即可赋值
    char d = 'x';
    char *pb = &d;
    pa = pb;
    cout << pa << endl;

}
