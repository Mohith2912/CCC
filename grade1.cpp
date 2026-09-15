#include <iostream>
using namespace std;
int main(){
    int a;
    cout << "Enter Ur Mark : "; 
    cin >> a;
    
    switch(a / 10){
        case 10:
        case 9:
            cout << "Grade : A" << endl;
            break;
        case 8:
            cout << "Grade : B" << endl;
            break;
        case 7:
            cout << "Grade : C" << endl;
            break;
        case 6:
            cout << "Grade : D" << endl;
            break;
        default:
            cout << "Grade : F " << endl;
    }
}