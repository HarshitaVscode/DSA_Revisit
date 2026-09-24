#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of elements of array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of array : ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int x;
    cout<<"Enter the element which you want to find : ";
    cin>>x;
    bool flag = false;   // false means element is not present
    for(int i=0; i<n; i++){
        if(arr[i]==x){
            flag = true;
            // break;
        }
    }
    if(flag == true) cout<<"Element Found!!";
    else cout<<"Not Found!!";
}