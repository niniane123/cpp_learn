//
// Created by Niniane on 2023/4/24.
//
#include <iostream>

//�곣��������һ���ô�д

using namespace std;

int main() {
    int *p = new int(3);
    cout << " p= " << p << " *p= " << *p << endl;

    {
        //        ����ָ���ָ��ĵ�ַ
        int **pp = &p;
        //        ����ָ������þ���p p�������һ��ָ��
        //��ָ��pָ���ڴ��ǿ����ֵ�ĳ�1000
        *pp = new int(100);
        cout << "p�ĵ�ַΪ��" << p << " p��ֵΪ=" << *p << endl;
    }


}