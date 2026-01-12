//armstrong number is a number in which the sum of the cubes of each digit is equal to the number itself

#include <iostream>
#include <cmath>
using namespace std;    
int main()
{
    int num, temp, digit;
    int sum = 0;
    cout << "Enter a number:  ";
    cin >> num;
    temp = num;
    while (temp > 0)
    {
        digit = temp % 10;
        sum = sum + pow(digit, 3);
        temp = temp / 10;
    }
    if (sum == num)
    {
        cout << num << " is an Armstrong Number";
    }
    else
    {
        cout << num << " is not an Armstrong Number";
    }
    return 0;
}