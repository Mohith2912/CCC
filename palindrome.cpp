#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter n Numbers : " << endl;
    cin >> n;
    int original = n;
    int r = 0;
    while(n > 0){
        r = r * 10 + n % 10;
        n/=10;
    }
    cout << "Reverse of digits is : " << r << endl;
    if(r == original){
        cout << "The number is a palindrome" << endl;
    }
    else{
        cout << "The number is not a palindrome" << endl;
    }
    return 0;
}