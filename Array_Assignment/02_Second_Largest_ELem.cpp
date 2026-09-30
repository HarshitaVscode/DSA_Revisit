// Ques : Find the second largest element in the given Array in one pass

#include<iostream>
#include<climits>
#include<algorithm>
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
    
    int maxi = INT_MIN, smax = INT_MIN;
    maxi = smax = arr[0];
    for(int i=1; i<n; i++){
        if(arr[i] > maxi){
            smax = maxi;
            maxi = arr[i];
        }
        else if(arr[i] < maxi && arr[i] > smax){
            smax = arr[i];
        }
    }

    cout<<"max : "<<maxi<<endl;
    
    cout<<"smax: "<<smax;
}
