#include<iostream>
using namespace std;
int main(){
    int x;
    cout << "Enter a Number : " << endl;
    cin >> x;
    for(int i = 1; i <= x; i++){
        for(int j = 1; j <= i; j++){
            cout << "*";
        }
        for(int k = 1; k <= 2*(x-i); k++){
            cout << " ";
        }
        for(int j = 1; j <= i; j++){
            cout << "*";
        }
        cout << endl;
    }
    for(int i = x - 1; i >= 1; i--){
        for(int j = 1; j <= i; j++){
            cout << "*";
        }
        for(int k = 1; k <= 2*(x-i); k++){
            cout << " ";
        }
        for(int j = 1; j <= i; j++){
            cout << "*";
        }
        cout << endl;
    }
}