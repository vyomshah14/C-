#include <iostream>
using namespace std;

class Bankaccount{
    private:
       float AccountNumber;
       float Password;
    public:
       string Name;
       float Balance;
       void display(){
           cout << "Account holder: " << Name << endl;
           cout << "Account balance: " << Balance << endl;
       }
       void setaccountdetails(float accnum, float pass){
           AccountNumber = accnum;
           Password = pass;
       }
    
       

};

int main(){
    Bankaccount N1;
    N1.Name = "Vyom";
    N1.Balance = 10000.50;
    N1.setaccountdetails(12345, 1234);
    N1.display();
    return 0;
}