//pointer
#include <iostream>
using namespace std;
int main(){
    int x = 25;
    int *p= &x;
    cout << "value of X: " << x << endl;
    cout << "address of x: " << &x << endl;
    cout << "Value stored in p: " << p << endl;
    cout << "Value pointed by p: " << *p << endl;
    return 0;
}