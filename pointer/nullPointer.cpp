//
// Created by Niniane on 2023/4/24.
//
#include <iostream>

//�곣��������һ���ô�д

using namespace std;

int main() {
    int *p = 0;

//    ��ָ������ûᵼ�³���ִ���쳣 �Ӷ�ʧ��
    cout << "�Կ�ָ������õ�ֵΪ��" << *p << endl;

//    ���տ�ָ�벻��ʧ��
    delete p;
    cout<<"===============";
}