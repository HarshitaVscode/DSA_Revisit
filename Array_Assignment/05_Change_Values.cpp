// C++ Assignments | Arrays - 2 : Given an array of integers, change the value of all odd indexed elements to its second multiple and increment all even indexed values by 10.

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;

    int arr[n];

    // Taking Input of array values
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    // Changing the values
    for(int i=0; i<n; i++){
        if(i % 2 == 0) arr[i] += 10;
        else arr[i] *= 2;
    }

    //Display manipulated array
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }


}