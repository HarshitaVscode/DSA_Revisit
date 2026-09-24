//Findout the second largest element in the given array

#include<iostream>
#include<climits>
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
    
    int max = INT_MIN, smax = INT_MIN;
    for(int i=0; i<n; i++){
        if(max < arr[i]){
            max = arr[i];
        }
    }
    cout<<"max : "<<max<<endl;
    for(int i=0; i<n; i++){
        if( arr[i] != max && smax < arr[i] ){
            smax = arr[i];
        }
    }
    cout<<" smax: "<<smax;
}
