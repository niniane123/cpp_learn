//
// Created by Niniane on 2023/4/7.
//
#include <iostream>

using namespace std;

int main() {
    int a = 10;
    int c = 30;
    c -= a;
    cout << c << endl;
    c += a;
    cout << c << endl;
    c %= a;
    cout << c << endl;
    c /= a;
    cout << c << endl;
    c *= a;

    cout << "hello world" << endl;
}