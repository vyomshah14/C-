// find the sum of proper divisors of a number
#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;

    cout << "Enter a number: ";
    cin >> n;

    // find sum of proper divisors
    for (int i = 1; i <= n / 2; i++) {
        if (n % i == 0) {
            sum += i;
        }
    }

    cout << "Sum of proper divisors = " << sum << endl;

    // check perfect number
    if (sum == n && n != 0)
        cout << n << " is a Perfect Number" << endl;
    else
        cout << n << " is NOT a Perfect Number" << endl;

    return 0;
}