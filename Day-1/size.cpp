#include <iostream>
using namespace std;

int main() {
    int a;
    float b;
    double c;
    char d;
    bool e;

    cout << "size of int: " << sizeof(a) << " bytes" << endl;
    cout << "size of float: " << sizeof(b) << " bytes" << endl;
    cout << "size of double: " << sizeof(c) << " bytes" << endl;
    cout << "size of char: " << sizeof(d) << " bytes" << endl;
    cout << "size of bool: " << sizeof(e) << " bytes" << endl;

    return 0;
}