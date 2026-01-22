#include <iostream>
#include <cmath> //for sqrt(), pow()
#include <cstring> //for strlen()
using namespace std;
/* --------------------------------------
     1. USER DEFINED FUNCTIONS
   ---------------------------------------*/
//NON- VOID FUNCTIONS
int add ( int a, int b) {
    return a + b;
}

//VOID FUNCTIONS
void greet () {
    cout << "Hello! Welcome to C++ programming." << endl;
}

// BOOLEAN RETURN FUNCTION
bool isEven(int n) {
    return (n % 2 == 0);
}

/*------------------------
  2. CALL BY VALUE 
 -----------------------*/ 
 void callByValue(int x) {
     x = 100;
     cout << "Inside callByValue, modified x: " << x << endl;
    }

/*------------------------
  3. CALL BY REFERENCE 
 -----------------------*/
 void callByReference(int &x) {
     x = 200;
 }
 /*------------------
  4. CALL BY POINTER
-------------------*/
    void callByPointer(int *x) {
        *x = 300;  }
/*------------------
  5. Default Arguments Function
-------------------*/
int sumDefault(int a, int b = 5) {
    return a + b;
}
/*------------------
  6. Inline Function
------------------*/
inline int square(int x) {
    return x * x;
}
/*------------------
  7. Function Overloading
-------------------*/
int multiply(int a, int b) {
    return a * b;
}
float multiply(float a, float b) {
    return a * b;
}
/*------------------
  8. Recursive Function
-------------------*/
int factorial(int n) {
    if (n == 0) return 1;
    return n * factorial(n - 1);
}

int main()
{
    cout << "===== BUILT-IN FUNCTIONS =====\n";
    cout << "Square Root of 16: " << sqrt(16) << endl;
    cout << "Power (2^3): " << pow(2, 3) << endl;
    cout << "Length of 'Hello': " << strlen("Hello") << endl;

    cout << "\n===== USER-DEFINED FUNCTIONS =====\n";
    greet();
    cout << "Addition: " << add(10, 20) << endl;
    cout << "Is 8 Even? " << isEven(8) << endl;

    cout << "\n===== CALL BY VALUE =====\n";
    int a = 10;
    callByValue(a);
    cout << "After Call by Value: " << a << endl;

    cout << "\n===== CALL BY REFERENCE =====\n";
    int b = 20;
    callByReference(b);
    cout << "After Call by Reference: " << b << endl;

    cout << "\n===== CALL BY POINTER =====\n";
    int c = 30;
    callByPointer(&c);
    cout << "After Call by Pointer: " << c << endl;

    cout << "\n===== DEFAULT ARGUMENTS =====\n";
    cout << "Sum (10, 20): " << sumDefault(10, 20) << endl;
    cout << "Sum (10): " << sumDefault(10) << endl;

    cout << "\n===== INLINE FUNCTION =====\n";
    cout << "Square of 5: " << square(5) << endl;

    cout << "\n===== FUNCTION OVERLOADING =====\n";
    cout << "Multiply (10, 20): " << multiply(10, 20) << endl;
    cout << "Multiply (10.5, 20.5): " << multiply(10.5f, 20.5f) << endl;

    cout << "\n===== RECURSIVE FUNCTION =====\n";
    cout << "Factorial of 5: " << factorial(5) << endl;

    return 0;
}