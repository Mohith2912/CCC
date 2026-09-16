#include <iostream>
using namespace std;
int main() {
    string str;
    int alphabets = 0, digits = 0, spaces = 0, special = 0;
    cout << "Enter a string: ";
    getline(cin, str);
    for (int i = 0; i < str.length(); i++) {
        char ch = str[i];
        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
            alphabets++;
        }
        else if (ch >= '0' && ch <= '9') {
            digits++;
        }
        else if (ch == ' ' || ch == '\t' || ch == '\n') {
            spaces++;
        }
        else {
            special++;
        }
    }
    cout << "Alphabets: " << alphabets << endl;
    cout << "Digits: " << digits << endl;
    cout << "Spaces: " << spaces << endl;
    cout << "Special Characters: " << special << endl;
    return 0;
}