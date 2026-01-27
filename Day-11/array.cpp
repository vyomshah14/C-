#include <iostream>
using namespace std;

int main(){
    int arra[10] = {10,20,30,40,50,6,7,8,9,10};
    int *p = arra;
    //for loop
    for (int i = 0; i < 10; i++) {
        cout << *p << endl;
        p++;
    }
    return 0;
}