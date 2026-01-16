#include <iostream>
using namespace std;

class bank{
public:
    int balance = 5000;
    void deposit(int amount)
    {
        balance += amount;
        cout << "Balance after deposit" << balance << endl;

    }
    void withdraw(int amount){
        balance -= amount;
        cout << "balance after withdraw. " << balance << endl;
    }};
int main()
{
    bank b;
    b.deposit(20000);
    b.withdraw(1899);
    return 0;
}


