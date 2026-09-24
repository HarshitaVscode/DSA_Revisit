#include<iostream>
//#include<climits>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of the array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array : ";
    for(int i=0; i<n ; i++){
        cin>>arr[i];
    }
    //int min = INT_MAX;
    int min = arr[0];
    for(int i=1; i<n; i++){
        if(arr[i]<min){
            min = arr[i];
        }
    }
    cout<<"Minimum value of the array : "<<min;
}