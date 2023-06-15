//
// Created by Niniane on 2023/5/9.
//
#pragma pack(1);
using namespace std;

#include <iostream>


//结构体的作用：减少形参传递数量
struct student {
    //如果希望在结构体中使用 C 语言风格的字符串，可以将其定义为字符数组，并使用 strcpy() 函数进行赋值操作
    //字符数组不支持直接赋值操作
    //char name[20] = {"zhansan"};
    int age;
    int grade;
};

int main() {
    struct student zhangsan;
    struct student lisi = {12, 8};
    cout << zhangsan.grade << endl;
    cout << lisi.age << " " << lisi.grade << endl;
    /*
     *
     * C++标准上只是说long至少要和int一样大，所有整数类型实现时要满足如下规范：

       sizeof(char)  ==  1

       sizeof(char)  <=  sizeof(short)

       sizeof(short)  <=  sizeof(int)

       sizeof(int)  <=  sizeof(long)

       sizeof(long)  <=  sizeof(long long)
     *
     *
     * */
    cout << sizeof(char) << endl;
    cout << sizeof(int) << endl;
    cout << sizeof(bool ) << endl;
    cout << sizeof(float ) << endl;
    cout << sizeof(double ) << endl;
    cout << sizeof(long long ) << endl;
    //memset()可以吧结构体中的全部成员清0 只适用于c++基本数据类型
    //用memcopy()函数可以把结构体中的全部元素复制到另外一个相同类型的结构体中只适用于C++基本数据烈性

}