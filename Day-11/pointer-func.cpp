#include <iostream>
using namespace std;
// void swap (int *a, int *b) {
//     int temp = *a;
//     *a = *b;
//     *b = temp;
// }

// int main(){
//     int x =10 , y=20;
//     swap (&x,&y);
//     cout << "X = " << x << " Y = " << y;
//     return 0;
// }

int main (){
    int x = 100;
    int *p = &x;
    int **pp = &p;
    cout << x << endl;
    cout << *p << endl;
    cout << **pp << endl;
    return 0;
}

// Null pointer: a pointer that is initailaized to point to nothing (no address);
// // why null poionter is used?
// 1. to show that a pointer is not pointing to any variable
// 2. to avoid garbage values
// 3. to prevent accidental access to memory