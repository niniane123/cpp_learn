//
// Created by Niniane on 2023/4/19.
//
#include <iostream>
#include <stdio.h>

//�곣��������һ���ô�д  ����ָ����һ��ָ�룬ֻ������ָ��Ķ�����һ��������ͨ���������޸ĵĳ���
using namespace std;


void readValue(const int *a, const int *b);

int main() {
    int a = 100;
    int b = 23;
    const int *pa = &a;
    cout << "a value is " << *pa << endl;
    //    read-only variable is not assignable;
    //    *pa = 2343;
    readValue(&a, &b);


}

//��ָ����Ϊ�����Ĳ�����ʱ��ͨ��ָ�����ֱ�����õ�ʵ�� ���ǳ����ֲ������ݵķ�ʽΪ��ַ����
//�������Ϊֵ���ݣ����βο���ʵ�Σ��ڴ������޸��ββ�Ӱ��ʵ�Σ�
void readValue(const int *a, const int *b) {
    cout << "a value:" << *a << endl;
    cout << "b value:" << *b << endl;

    //����ָ��ָ��Ķ����ǿɱ�� ��ָ��ָ����ڴ��ַ�ɱ䣬�������ֱ仯�������壻
    int c = 123;
    a = &c;
    cout << "c��ֵΪ" << *a << endl;


}