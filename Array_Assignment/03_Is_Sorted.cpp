//  C++ Assignments | Arrays - 2 : Check if the given array is sorted or not

#include<iostream>
using namespace std;

bool is_Sorted (int arr[], int n){
    for(int i=1; i<n; i++){
        if(arr[i] < arr[i-1]) return false;
    }

    return true;
}

int main(){
    int n;
    cin>>n;

    int arr[n];

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    cout<<is_Sorted(arr, n)<<endl;
}