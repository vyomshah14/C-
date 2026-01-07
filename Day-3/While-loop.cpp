//while loop
#include <iostream>
using namespace std;

int main() {
    int i = 1;
    while (i <= 5) {
        cout << i << " " << endl;
        i++;
    }
// checking the even number in btw 50
    int E;
    cout << "Enter the number: ";
    cin >> E;
    while (E <= 50) {
        if (E % 2 == 0) {
            cout << E << " is an even number." << endl;
    }
    E++;
    }
// Addition via while loop
    int A = 1, sum = 0;
    while (A <= 10) {
        sum += A;
        A++;
    }
    cout << "The sum is: " << sum << endl;
//factorial
    int F = 1, fact = 1;
    cout << "Enter a number to find its factorial: ";
    cin >> F;
    while (F >= 1) {
        fact *= F;
        F--;
    }
    cout << "The factorial is: " << fact << endl;
    return 0;
}
