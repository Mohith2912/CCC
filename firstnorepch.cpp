#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    cout << "Enter a string:";
    cin >> str;
    int flag = 0;
    for(int i = 0; i < str.length(); i++){
        int count = 0;
        for(int j = 0; j < str.length(); j++){
            if(str[i] == str[j]){
                count++;
            }
        }
        if(count == 1){
            cout << "First Non-Repeating Char: " << str[i] << endl;
            flag = 1;
            break;
        }
    }
    if(flag == 0){
        cout << "No non-repeating char" << endl;
    }
    return 0;
}