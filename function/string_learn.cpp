//
// Created by Niniane on 2023/4/9.
//
using namespace std;

#include <iostream>

int main() {
    string name = "";
    cout << "����������" << endl;
    cin >> name;
    //�ַ����ıȽ�
    if (name == "zrc") cout << "���������Ϊzrc" << endl;
    if (name == "zhangsan") cout << "�Ҳ�ϲ��zrc" << endl;
    //�ַ�����ƴ��
    name = "this is a test " + name + "����һ��ƴ���ַ���";
    cout << "name is " << name;

    //���ƴ�ӵ��ַ���ÿһ�����ǳ��� ��ô����ʹ�üӺ�ƴ�ӣ�����Ӧ��ʹ�ÿո�ƴ��
//    name2 = "this ia a str" + "this is a stre" + "this is a str3";
    string name2 = "this ia a str"  "this is a stre"  "this is a str3";

    return 1;
}