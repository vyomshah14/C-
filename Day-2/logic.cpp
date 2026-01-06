#include <iostream>
using namespace std;

int main() {
    int marks;
    cout << "Enter your marks: ";
    cin >> marks;

    if (marks >= 90) {
        cout << "Your grade is A." << endl;
    } else if (marks >= 70 and marks < 90) {
        cout << "Your grade is B." << endl;
    } else if (marks >= 50 and marks < 70) {
        cout << "Your grade is C." << endl;
    } else {
        cout << "You have failed the exam." << endl;
    }

    return 0;
}