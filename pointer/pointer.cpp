#include <iostream>

//�곣��������һ���ô�д
#define  MONTHS 12
#define  PI 3.14
using namespace std;

int main() {
    int a;
    char b;
    bool c;
    string d;
    cout << "a�ĵ�ַ��" << &a << endl;
    cout << "b�ĵ�ַ��" << &b << endl;
    cout << "c�ĵ�ַ��" << &c << endl;
    cout << "d�ĵ�ַ��" << &d << endl;

    cout << "=========================" << endl;
    cout << "a�ĵ�ַ��" << (void *) &a << endl;
    cout << "b�ĵ�ַ��" << (void *) &b << endl;
    cout << "c�ĵ�ַ��" << (void *) &c << endl;
    cout << "d�ĵ�ַ��" << (void *) &d << endl;

//    ����ַתΪ���� int����ʾ��Χ̫С�� ��������ʹ��long long���͵�����
    cout << "=========================" << endl;
    cout << "a�ĵ�ַ��" << (long long) &a << endl;
    cout << "b�ĵ�ַ��" << (long long) &b << endl;
    cout << "c�ĵ�ַ��" << (long long) &c << endl;
    cout << "d�ĵ�ַ��" << (long long) &d << endl;

//    ָ����� �﷨���������� *������
    int *pa = &a;
    char *pb = &b;
    bool *pc = &c;
    string *pd = &d;
    cout << "=========================" << endl;
    cout << "a�ĵ�ַ��" << (long long) pa << endl;
    cout << "b�ĵ�ַ��" << (long long) pb << endl;
    cout << "c�ĵ�ַ��" << (long long) pc << endl;
    cout << "d�ĵ�ַ��" << (long long) pd << endl;

//    ָ��ռ�õ��ڴ�
    cout << sizeof(pa) << endl;
    cout << sizeof(&a) << endl;

}