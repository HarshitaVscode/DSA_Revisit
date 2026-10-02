// C++ Assignments | Arrays - 2 : Find the difference between the sum of elements at even indices to the sum of elements at odd indices.

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;

    int arr[n];

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int sum_odd = 0;
    int sum_even = 0;
    for(int i=0; i<n; i++){
        if(i % 2 == 0) sum_even += arr[i];
        else sum_odd += arr[i];
    }

    cout<<(sum_even-sum_odd)<<endl;
}