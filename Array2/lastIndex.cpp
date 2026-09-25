// method 2 to find the occurance of a number in an array(reverse loop)
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
    for(int i=v.size()-1; i >= 0; i--){
        if(v[i] == x){
            temp = i;
            break;
        }
    }
    cout<<"last occurance of x is : "<<temp;
    
}