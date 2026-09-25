// Write a program to copy the contents of one array into another in the reverse order
#include<iostream>
#include<vector>
using namespace std;
void display(vector<int>v){
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
int main(){
    vector<int>v1;
    int n;
    cout<<"Enter array size : ";
    cin>>n;

    cout<<"Enter the values : ";
    for(int i=0; i<n; i++){
        int a;
        cin>>a;
        v1.push_back(a);
    }
    display(v1);
    
    vector<int>v2(n);
    for(int i=0; i<n; i++){
        v2[i] = v1[n-1-i];
    }
    display(v2);
    
}