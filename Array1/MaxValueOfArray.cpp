#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of the array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array : ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int max = arr[0];
    for(int i=1; i<n; i++){
        if(max < arr[i]){
            max = arr[i];
        }
    }
    cout<<"Max value of array is : "<<max;
}