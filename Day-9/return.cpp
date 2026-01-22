// #include <iostream>
// using namespace std;
// void printEven(){
//     for (int i = 1; i <= 20; i++) {
//         if (i % 2 == 0)
//             cout << i << " ";
//     }
// }
// int main() {
//     printEven();
//     return 0;
// }
// reverse
#include <iostream>
using namespace std;

// void printEvenReverse() {
//     for (int i = 10; i >= 1; i--) {
//         if (i % 2 == 0)
//             cout << i << endl;
//     }
// }

// int main() {
//     printEvenReverse();
//     return 0;
// }
// prime number 
void printPrime() {
    for (int i = 1; i <= 10; i++) {
        int count = 0;

        for (int j = 1; j <= i; j++) {
            if (i % j == 0)
                count++;
        }

        if (count == 2)
            cout << i << endl;
    }
}

int main() {
    printPrime();
    return 0;
}