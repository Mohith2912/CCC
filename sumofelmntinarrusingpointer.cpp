#include<iostream>
using namespace std;
int main(){
     int n;
     cout<<"Enter the size of the array: ";
     cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
          cout<<"Enter element ";
        cin>>arr[i];
    }
    int *ptr=arr;
    int sum=0;
    for(int i=0;i<n;i++){
     sum+=*(ptr+i);
    }
    cout<<"Sum of the array elements is: "<<sum;
    return 0;
}