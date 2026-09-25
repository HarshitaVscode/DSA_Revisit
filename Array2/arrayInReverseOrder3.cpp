#include<iostream>
#include<vector>
using namespace std;
void display(vector<int>v){
    for(int i=0; i<=v.size()-1;i++){
        cout<<v[i];
    }
}
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
    }
    display(v);
    cout<<endl;
   
    // using for loop

    for(int i=0, j=v.size()-1; i<=j; i++, j--){
        int temp = v[i];
        v[i]= v[j];
        v[j] = temp;
    }
    display(v);
    
}