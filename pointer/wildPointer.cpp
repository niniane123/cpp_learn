//
// Created by Niniane on 2023/4/24.
//
#include <iostream>

//�곣��������һ���ô�д

using namespace std;

int *test() {
    int a = 100;
    cout << "ָ��a�ĵ�ַΪ��" << &a << endl;
    return &a;
}

int main() {
//    1.ָ��ָ���˶�̬������ڴ棬�ڴ����ͷ�֮��ָ�벻���ÿգ�����ָ����ڴ��ַ�Ѿ�ʧЧ
    int *p = new int(10);
    cout << p << "   " << *p << endl;
    delete p;
    //����Ұָ��
    cout << p << "   " << *p << endl;


//    2.ָ��ָ��ı����Ѿ���Խ�˱����������򣨱������ڴ�ռ��Ѿ���ϵͳ���գ�
    int *ptest = test();
    cout << "ptestָ����ڴ��ַΪ��" << ptest << " ptest�����õõ���ֵΪ��  " << *ptest << endl;

//    3.ָ��δ��ʼ�� Ҳ����ֵδnullptr;

    int *nullpointer;

}