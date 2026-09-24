#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of elements of array : ";
    cin>>n;
    int arr[n], sum = 0;
    cout<<"Enter the elements : ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    for(int i=0; i<n; i++){
        sum += arr[i];
    }
    cout<<"The sum of the given array is : "<<sum;
}