#include <iostream>
#include <climits>
using namespace std;

int main() {
    int n;
    if(n==0){
        cout<<"Array is empty"<<endl;
        return 0;
    }
    cout << "Enter the size ";
    cin >> n;
    int arr[n];
    cout<<"Enter "<<n<<" elements: ";
    for(int i=0;i<n;i++){
        cin>> arr[i];
    }