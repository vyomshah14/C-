#include <iostream>
using namespace std;

int main(){
    int a,b;
    char op;
    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;
    cout << "Enter an operator (+, -, *, /, ^): ";
    cin >> op;

    switch(op){
        case '+':
            cout << "Result: " << a + b << endl;
            break;
        case '-':
            cout << "Result: " << a - b << endl;
            break;
        case '*':
            cout << "Result: " << a * b << endl;
            break;
        case '/':
            if(b != 0)
                cout << "Result: " << a / b << endl;
            else
                cout << "Division by zero error!" << endl;
            break;
        case '^':
            cout << "Result: " << pow(a, b) << endl;
            break;
        default:
            cout << "Invalid operator!" << endl;
    }

    return 0;
}