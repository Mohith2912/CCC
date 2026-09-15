#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter n Numbers : " << endl;
    cin >> n;
    int r = 0;
    while(n > 0){
        r = r * 10 + n % 10;
        n/=10;
    }
    cout << "Reverse of digits is : " << r << endl;
}