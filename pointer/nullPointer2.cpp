//
// Created by Niniane on 2023/4/24.
//
#include <iostream>

//宏常量的命名一般用大写

using namespace std;

void showMessage(int *number, string *message) {
    if (number == nullptr || message == nullptr) return;
    cout << "the message is :" << *message << endl << " the number is " << *number << endl;

}

int main() {
    int *number = new int(10);
    string *message = new string("I am happy");
    showMessage(number, message);
    return 1;
}