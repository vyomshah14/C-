#include <iostream>
using namespace std;
class student {
    private:
        int marks;

    public:
        int roll_no;
        string name;
        void display() {
            cout << "Roll No: " << roll_no << endl;
            cout << "Name: " << name << endl;
        }
        void setMarks(int m) {
            marks = m;
        }
};

int main() {
    student s1;
    s1.roll_no = 1;
    s1.name = "vyom";
    s1.setMarks(85);
    s1.display();

    return 0;
}
