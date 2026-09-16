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
    int temp[n];
    for(int i=0;i<n;i++) temp[i]=0;
    for(int i=0;i<n;i++){
        if(temp[i]==1)continue;
        int count=0;
            for(int j=0;j<n;j++){
                if(arr[i]==arr[j]){
                    count++;
                    temp[j]=1;
                }
            }
            cout<<arr[i]<<" occurs "<<count<<" times"<<endl;
        }
    }