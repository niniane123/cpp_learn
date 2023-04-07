#include <iostream>

using namespace std;

void staticTest();

int main() {
    for (int i = 0; i < 10; ++i) {
        staticTest();
    }
}
//20
//30
//40
//50
//60
//70
//80
//90
//100
//110
void staticTest() {
    static int key = 10;
    key += 10;
    cout << key << endl;
}