//
// Created by Niniane on 2023/4/25.
//

//
// Created by Niniane on 2023/4/19.
//
#include <iostream>
#include <stdio.h>

using namespace std;


//��������ԭ��
int fun1(int bh, string str);

int fun2(int no, string message);

int fun3(int id, string info);

//��������������ָ������Ϊ
//zhi��functionPointerָ�� ����ֵΪint �β��б�����Ϊint string���͵ĺ���

int (*functionPointer)(int, string);

int main() {
    int id = 12;
    string info = "this is information";
    fun3(id, info);

//  ����fun3��ָ��
    int ( *funcPointer)(int, string);

//    ��ָ��ָ��func3 ����ָ����=������
    funcPointer = fun3;

//    c++�﷨���ú���ָ�������ú���
    funcPointer(id, info);

//    c���﷨���ú���ָ�������ú���
    (*funcPointer)(id, info);

}


int fun3(int id, string info) {
    cout << "id is: " << id << " info is :" << info << endl;
}

