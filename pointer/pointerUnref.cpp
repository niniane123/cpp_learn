#include <iostream>

//�곣��������һ���ô�д

using namespace std;

int main() {
    int a = 10;
//    b��ŵ����ڴ��ַ ����a���ڴ��е���ʼ��ַ ����Ҫ��ȡ��������ֵ����Ҫͨ�������õķ�ʽ������
    int *b = &a;
    cout << "��a�����õ�ֵΪ" << *b << endl;

    // �޸�ָ��ָ��ı���ֵ
    *b = 12;
    cout << "�޸�a��ֵΪ" << *b << endl;


    a = 200;
    cout << "a��ֵΪ��" << a << endl;
    cout << "��b�����õ�ֵΪ��" << *b << endl;

}