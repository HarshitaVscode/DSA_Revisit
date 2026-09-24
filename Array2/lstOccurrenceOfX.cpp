#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    // cout<<"Enter the size of the vector : ";
    // cin>>n;
    vector<int>v;
    v.push_back(6);
    v.push_back(1);
    v.push_back(9);
    v.push_back(10);
    v.push_back(77);
    v.push_back(1);
    v.push_back(48);
    int x, temp=-1;
    cout<<"Enter the number whose occurance you want to check : ";
    cin>>x;
    for(int i=0; i<v.size(); i++){
        if(v[i] == x){
            temp = i;
        }
    }
    cout<<"last occurance of x is : "<<temp;
    
}