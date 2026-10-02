// C++ Assignments | Arrays - 2 : C++ Assignments | Arrays - 2 

#include<iostream>
using namespace std;

bool is_palindrome(int arr[], int n){
    int i = 0;
    int j = n-1;
    while(i < j){
        if(arr[i] != arr[j]) return false;
        else{
            i++;
            j--;
        }
    }
    return true;
}


int main(){
    int n;
    cin>>n;

    int arr[n];

    // Taking Input of array values
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    cout<<is_palindrome(arr, n);

}