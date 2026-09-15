#include <iostream>
using namespace std;
int main(){
    string username = "SRM123" , password = "srm@123";
    cout << "Enter Username : ";
    cin >> username;
    cout << "Enter Password : ";
    cin >> password;
    if(username == "SRM123" && password == "srm@123"){
        cout << "Login Successful" << endl;
        int a,b,c;
        cout << "Bank Balance : ";
        cin >> a;
        cout << "Withdraw Amount : ";
        cin >> b;
        if(a >= b){
            cout << "You can Withdraw the amount" << endl;
        }
        else{
            cout << "INsufficient Balance" << endl;
        }
        c = a - b;
        cout << "Remaining Balance : " << c << endl;
    }
    else{
        cout << "Invalid Credentials" << endl;
    }
    return 0;
}