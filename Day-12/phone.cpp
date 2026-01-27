#include <iostream>
using namespace std;

class Device {
public:
    void powerOn() {
        cout << "Device powered on" << endl;
    }
};

class Phone : public Device {
protected:
    void call() {
        cout << "Calling..." << endl;
    }
};

int main() {
    Phone p;
    p.powerOn();
    p.call();
    return 0;
}