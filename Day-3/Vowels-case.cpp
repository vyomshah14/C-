// Vowel case conversion
#include <iostream>
#include <cctype>
using namespace std;
int main() {
    char ch;
    cout << "enter the character: ";
    cin >> ch;
    switch (ch)
    {
    case 'a':   case 'A':
    case 'e':   case 'E':
    case 'i':   case 'I':
    case 'o':   case 'O':
    case 'u':   case 'U':
        cout << ch << " " << " character is a vowel." << endl;
        break;
    default:
        cout <<  ch << " " << "character is not a vowel." << endl;
        break;
    }
    return 0;
}
