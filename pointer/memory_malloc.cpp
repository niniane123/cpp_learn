//
// Created by Niniane on 2023/4/19.
//
#include <iostream>

using namespace std;


void readValue(const int *a, const int *b);

int main() {

    //    �����ڴ�ռ�
    int *p = new int(10);

    cout << "ָ��p��ֵΪ��" << *p << endl;
    *p = 200;
    cout << "ָ��p��ֵΪ��" << *p << endl;

    //    �����ڴ�ռ�
    delete p;

}