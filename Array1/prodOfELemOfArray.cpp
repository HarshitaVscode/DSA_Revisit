#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of elements of array : ";
    cin>>n;
    int arr[n], prod=1;
    cout<<"Enter the elements of array : ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    for(int i=0; i<n; i++){
        prod *= arr[i];
    }
    cout<<"Product of elemts of array : "<<prod;
}