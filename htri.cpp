#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter n Numbers : " << endl;
    cin >> n;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
        if(i == n || j == 1 || i == j){
            cout << j << " " ;
        }
        else{
            cout << "  " ;
        }
        }
        cout << endl;
    }
}