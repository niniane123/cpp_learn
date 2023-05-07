
#include <iostream>

using namespace std;

//左定值 右定向 const修饰不变量
int compare(const void *p1, const void *p2) {
    // void指针不能直接解引用 必须要转换为具体的指针类型
    //    if ((*(int *) p1) > *((int *) p2)) {
    //        return 1;
    //    }
    //    return -1;
    //更加优雅的实现 一行代码搞定
    return -((*(int *) p1) - *((int *) p2));
}

int main() {
    //void qsort(void* base,size_t nmbemb,size_t size int(*cmpar)(const void*,const void*));
    //第一个参数：数组的起始地址
    //第二个参数 数组元素的个数  通过计算得出 提高程序的健壮性
    //数组元素的大小 通过计算得出 提高程序的健壮性；
    //回调函数的地址
    int a[8] = {1, 2, 3, 0, 4, 5, 34, 32};

    qsort(a, sizeof(a) / sizeof(int), sizeof(int), compare);
    for (int i = 0; i < sizeof(a) / sizeof(int); ++i) {
        cout << a[i] << endl;
    }
}