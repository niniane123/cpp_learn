//
// Created by Niniane on 2023/4/24.
//
#include <iostream>

//�곣��������һ���ô�д

using namespace std;

int main() {
    int i = 10;
    cout << "i�ĵ�ַΪ��" << &i << " i��ֵΪ" << i << endl;
    //pi��ֵΪ��ָ����ڴ��ַ
    //ͨ����ָ��pi�����ÿ��Ի�ȡ��ָ���ڴ��ַ�ı���ֵ
    //ָ�뱾��ռ�����ڴ��ַ����������ָ��ָ���ָ��

    int *pi = &i;
    cout << "pi��ֵΪ" << pi << " ָ��pi�Ľ�����Ϊ" << *pi << " pi�ĵ�ַΪ" << &pi << endl;

    int **ppi = &pi;
    //ppi��ֵӦ����pi���ڴ��ַ
    //�����ã��Ǿ���pi��ֵ����Ϊppiָ�����pi���ڴ��ַ��pi��ֵ��i���ڴ��ַ��0x49e8dffcfc)
    cout << "ppi��ֵΪ" << ppi << " ָ��ppi�Ľ�����Ϊ" << *ppi << " ppi�ĵ�ַΪ" << &ppi << endl;
}