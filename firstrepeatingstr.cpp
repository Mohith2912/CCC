#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    cout << "Enter a String : " ;
    cin >> str;
    int flag = 0;
    for(int i = 0; i < str.length(); i++){
        int count = 0;
        for(int j = i + 1; j < str.length(); j++){
            if(str[i] == str[j]){
                count++;
            }
        }
        if(count > 0){
            cout << "First Repeating Character is : " << str[i] << endl;
            flag = 1;
            break;
        }
    }
    if(flag == 0){
        cout << "No Repeating Character " << endl;
    }

}