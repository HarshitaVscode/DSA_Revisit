#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v;
    int n;
    cout<<"Enter array size : ";
    cin>>n;

    cout<<"Enter the values : ";
    for(int i=0; i<n; i++){
        int a;
        cin>>a;
        v.push_back(a);
        cout<<v[i]<<" ";
    } cout<<endl;
    for(int i=v.size()-1; i>=0; i--){
        cout<<v[i]<<" ";
    }
}
 