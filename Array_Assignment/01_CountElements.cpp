// C++ Assignments | Arrays - 2  : Count the number of elements strictly greater than x

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;

    int arr[n];

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int x;
    cin>>x; 

    int count = 0;

    for(int i=0; i<n; i++){
        if(arr[i] > x) count++;
    }

    cout<<count<<endl;
}